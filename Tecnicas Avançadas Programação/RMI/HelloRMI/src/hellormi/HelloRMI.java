package hellormi;

import java.rmi.Remote;
import java.rmi.RemoteException;

public interface HelloRMI extends Remote {
    String Hello(String msg) throws RemoteException;
}
