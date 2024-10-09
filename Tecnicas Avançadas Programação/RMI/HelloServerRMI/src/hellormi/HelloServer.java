package hellormi;

import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.rmi.server.UnicastRemoteObject;
import java.util.logging.Level;
import java.util.logging.Logger;

public class HelloServer extends UnicastRemoteObject implements HelloRMI{

    public HelloServer() throws RemoteException
    { 
        super(); 
    } 
    
    public static void main(String[] args) {
        Registry registry;
        try {
            registry =  LocateRegistry.createRegistry(1234);
            registry.rebind("HelloServer", new HelloServer());
            System.out.println("Server started");
        } catch (RemoteException ex) {
            Logger.getLogger(HelloServer.class.getName()).log(Level.SEVERE, null, ex);
        }
        
    }

    @Override
    public String Hello(String msg) throws RemoteException {
        
        System.out.println(msg+" Invocation to Hello was succesful!"); 
        return msg+" Hello World from RMI server!"; }
}