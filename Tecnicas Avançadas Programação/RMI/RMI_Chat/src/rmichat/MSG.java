package rmichat;

import java.io.Serializable;
import java.util.Objects;

/**
 *
 * @author Miguel Antonio
 */
public class MSG implements Serializable {
    private Integer index;
    private Client sender;
    private Client recipient;
    private String msg;
    private boolean status;

    public MSG(Integer index, Client sender, Client recipient, String msg, boolean status) {
        this.index = index;
        this.sender = sender;
        this.recipient = recipient;
        this.msg = msg;
        this.status = false;
    }

    public MSG(Integer integer, Client sender, Client recipient, String text) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public Integer getIndex() {
        return index;
    }

    public void setIndex(Integer index) {
        this.index = index;
    }

    public Client getSender() {
        return sender;
    }

    public void setSender(Client sender) {
        this.sender = sender;
    }

    public Client getRecipient() {
        return recipient;
    }

    public void setRecipient(Client recipient) {
        this.recipient = recipient;
    }

    public String getMsg() {
        return msg;
    }

    public void setMsg(String msg) {
        this.msg = msg;
    }

    public boolean isStatus() {
        return status;
    }

    public void setStatus(boolean status) {
        this.status = status;
    }

    @Override
    public int hashCode() {
        int hash = 3;
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
        final MSG other = (MSG) obj;
        if (!Objects.equals(this.msg, other.msg)) {
            return false;
        }
        if (!Objects.equals(this.sender, other.sender)) {
            return false;
        }
        return Objects.equals(this.recipient, other.recipient);
    }
    
    @Override
    public String toString() {
        return "MSG{" + "index=" + index + ", sender=" + sender + ", recipient=" + recipient + ", msg=" + msg + ", status=" + status + '}';
    }
  
    public void write() {
        System.out.println(this.toString());
    }
}
