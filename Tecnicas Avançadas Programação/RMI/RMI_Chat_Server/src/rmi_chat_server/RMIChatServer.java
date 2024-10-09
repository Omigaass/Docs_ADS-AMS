package rmi_chat_server;

import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;
import rmichat.Client;
import rmichat.MSG;
import rmichat.RMIChat;

/**
 *
 * @author Miguel Antonio
 */
public class RMIChatServer extends UnicastRemoteObject implements RMIChat{
    private final String name;
    private final Hashtable<String, Client> clients;
    private final List<MSG> MSGs;
    private static Integer index = 0;
    
    public RMIChatServer(String name) throws RemoteException{
        this.name = name;
        MSGs = new ArrayList<>();
        clients = new Hashtable<>();
    }
          
    @Override
    public void sendMSG(Client sender, Client recipient, String text) throws RemoteException {              
            recipient = clients.get(recipient.getName());
            MSG msg = new MSG(++index, sender, recipient, text);
            System.out.println(msg);    
            MSGs.add(msg);                   
    }

    @Override
    public String getMSG(Client recipient) throws RemoteException { 
        return searchMSG(recipient);
    }

    public String searchMSG(Client sender) {           
        System.out.println("__________________________________________________________");
        String msgs = "";
        for(int i = 0; i < MSGs.size(); i++){              
            if(sender.equals(MSGs.get(i).getRecipient())){                                     
               MSGs.get(i).setStatus(true);
               msgs+=MSGs.get(i).getSender()+" escreveu :"+MSGs.get(i).getMsg()+System.lineSeparator();  
            }
            else if(sender.equals(MSGs.get(i).getRecipient()))
               msgs+=MSGs.get(i).getSender()+" escreveu :"+MSGs.get(i).getMsg()+System.lineSeparator();            
            MSGs.get(i).write();
        }     
        System.lineSeparator();
        return msgs;
    }
    
    public int isClient(Client client){
        for(int i = 0; i < clients.size(); i++)
            if(client.equals(clients.get(i)))
                return 1;
        return -1;
    }

    @Override
    public Hashtable<String, Client> getClients() throws RemoteException{
        return clients; 
    }   

    @Override
    public String getServerName() throws RemoteException {        
        return name;
    }

    @Override
    public void addClient(Client client) throws RemoteException {
        clients.put(client.getName(), client);
        System.out.println("new client connected: "+client);
    }
}