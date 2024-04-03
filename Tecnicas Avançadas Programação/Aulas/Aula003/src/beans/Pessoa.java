/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package beans;

/**
 *
 * @author aluno
 */
public class Pessoa extends Object {
    protected String RG;
    protected String nome;
    protected String email;
    protected String telefone;

    public Pessoa(String RG, String nome, String email, String telefone) {
        this.RG = RG;
        this.nome = nome;
        this.email = email;
        this.telefone = telefone;
    }

    public String getRG() {
        return RG;
    }

    public String getNome() {
        return nome;
    }

    public String getEmail() {
        return email;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setRG(String RG) {
        this.RG = RG;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }
    
    

    @Override
    public String toString() {
        return "Pessoa{" + "\n RG: " + RG + "\n nome: " + nome + "\n email: " + email + "\n telefone: " + telefone + "\n}";
    }
    
    
}
