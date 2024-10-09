package rmi_chat_server;

import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Miguel Antonio
 */
public class MainRMIChatServer {

    public static void main(String[] args) {
        Registry registry;
        try {
            registry = LocateRegistry.createRegistry(1099);
            String name = "serverchat";
            registry.rebind(name, new RMIChatServer(name));
            System.out.println(name + " started :" + registry.toString());
        } catch (RemoteException ex) {
            Logger.getLogger(RMIChatServer.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
}