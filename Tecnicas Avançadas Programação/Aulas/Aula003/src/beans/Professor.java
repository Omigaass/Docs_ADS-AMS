/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package beans;

/**
 *
 * @author ACER
 */
public class Professor extends Pessoa{
    private String matricula;
    private String titulo;
    private String area;

    public Professor(String RG, String nome, String email, String telefone) {
        super(RG, nome, email, telefone);
        this.matricula = matricula;
        this.titulo = titulo;
        this.area = area;
    }
}
