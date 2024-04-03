/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula005;
import beans.Circulo;
import beans.Quadrado;
import beans.Ponto2D;
import beans.Objeto2D;
import beans.SegReta2D;
/**
 *
 * @author aluno
 */
public class Aula005 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Ponto2D ponto01 = new Ponto2D(2,2);
        Ponto2D ponto02 = new Ponto2D(7,7);
        System.out.println(ponto01);
        System.out.println(ponto02);
        SegReta2D sr01 = new SegReta2D (ponto01, ponto02);
        sr01.moveX(10);
        
        System.out.println(sr01);
        Circulo c01 = new Circulo(ponto02, 3);
        System.out.println(c01);
        c01.moveXY(-2, -2);
        c01.setRaio(2);
        System.out.println(c01);
        
        Quadrado q01 = new Quadrado(ponto01, 3);
        System.out.println(q01.toString());
    }
    
}
