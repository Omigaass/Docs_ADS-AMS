import hellormi.HelloRMI;
import java.rmi.AccessException;
import java.rmi.NotBoundException;
import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.util.logging.Level;
import java.util.logging.Logger;

public class HelloClient {

    public void connectServer() {       
        Registry registry;    
        try {
            registry = LocateRegistry.getRegistry("192.168.0.220", 1099);
            HelloRMI rmi = (HelloRMI) registry.lookup("HelloServer");
            System.out.println("Connect to Server");
            String text = rmi.Hello("Miguel O GIGANTE");
            System.out.println(text);     
        } catch (RemoteException ex) {
            Logger.getLogger(HelloClient.class.getName()).log(Level.SEVERE, null, ex);
        } catch (NotBoundException ex) {
            Logger.getLogger(HelloClient.class.getName()).log(Level.SEVERE, null, ex);
        } 
    }
    
    public static void main(String[] args) {
        HelloClient client = new HelloClient();
        client.connectServer();
    }
    
}
