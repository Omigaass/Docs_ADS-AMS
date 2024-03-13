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
public class Aluno extends Pessoa{
    private String RA;
    private String curso;
    private String faculdade;

    public Aluno(String RA, String curso, String faculdade, String RG, String nome, String email, String telefone) {
        super(RG, nome, email, telefone);
        this.RA = RA;
        this.curso = curso;
        this.faculdade = faculdade;
    }

    public void setRA(String RA) {
        this.RA = RA;
    } 
    public String getRA() {
        return RA;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }
    public String getCurso() {
        return curso;
    }

    public void setFaculdade(String faculdade) {
        this.faculdade = faculdade;
    }
    public String getFaculdade() {
        return faculdade;
    }
    
    public void setRG(String RG) {
        this.RG = RG;
    }
    public String getRG() {
        return RG;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getNome() {
        return nome;
    }
    
    public void setEmail(String email) {
        this.email = email;
    }
    public String getEmail() {
        return email;
    }
    
    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }
    public String getTelefone() {
        return telefone;
    }

    @Override
    public String toString() {
        return "Aluno{" + "RA=" + RA + ", curso=" + curso + ", faculdade=" + faculdade + " RG=" + RG + " nome=" + nome + " email=" + email + '}';
    }
}
