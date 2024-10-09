package rmichat;

import java.util.Objects;

/**
 *
 * @author Miguel Antonio
 */
public class Client {
    private String name;
    private String IP;
    private Integer port;

    public Client(String nome, String IP, Integer port) {
        this.name = nome;
        this.IP = IP;
        this.port = port;
    }

    public Client() {
        name = "";
        IP = "127.0.0.1";
        port = 0;
        
    }

    @Override
    public int hashCode() {
        int hash = 3;
        hash = 29 * hash + Objects.hashCode(this.name);
        hash = 29 * hash + Objects.hashCode(this.IP);
        hash = 29 * hash + Objects.hashCode(this.port);
        return hash;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null) {
            return false;
        }
        if (getClass() != obj.getClass()) {
            return false;
        }
        final Client other = (Client) obj;
        if (!Objects.equals(this.name, other.name)) {
            return false;
        }
        if (!Objects.equals(this.IP, other.IP)) {
            return false;
        }
        if (!Objects.equals(this.port, other.port)) {
            return false;
        }
        return true;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getIP() {
        return IP;
    }

    public void setIP(String IP) {
        this.IP = IP;
    }

    public Integer getPort() {
        return port;
    }

    public void setPort(Integer port) {
        this.port = port;
    }

    @Override
    public String toString() {
        return "Client{" + "nome=" + name + ", IP=" + IP + ", port=" + port + '}';
    }
    
    public void write ()    {
        System.out.println(this.toString());
    }
}