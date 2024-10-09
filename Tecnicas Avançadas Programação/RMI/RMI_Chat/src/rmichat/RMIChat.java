package rmichat;

import java.rmi.Remote;
import java.rmi.RemoteException;
import java.util.Hashtable;

/**
 *
 * @author Miguel Antonio
 */
public interface RMIChat extends Remote{
    public String getServerName() throws RemoteException;
    public void addClient(Client client) throws RemoteException;
    public void sendMSG(Client sender, Client recipient, String text) throws RemoteException;
    public String getMSG(Client recipient) throws RemoteException;
    public Hashtable<String, Client> getClients() throws RemoteException;
}