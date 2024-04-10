/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package PooAula007;

import beans.Circulo;
import beans.Quadrado;
import beans.Retangulo;
import beans.Ponto2D;
import beans.Ponto3D;
import beans.SegmentoReta;
import beans.SegmentoReta3D;

/**
 *
 * @author aluno
 */
public class POOaula03 {

    public static void main (String[] args) {
        Ponto2D ponto01 = new Ponto2D(2, 2);
        Ponto2D ponto02 = new Ponto2D(7, 7);
        System.out.println(ponto01);
        System.out.println(ponto02);
        SegmentoReta segReta = new SegmentoReta(ponto01, ponto02);
        segReta.moveX(10);
        ponto02.moveX(3);
        ponto01.moveX(3);
        System.out.println(segReta);
        
        Circulo circu01 = new Circulo(ponto02, 3);
        System.out.println(circu01.toString());
        circu01.moveXY(-2,-2);
        circu01.setRaio(2);
        System.out.println(circu01);
        
        Quadrado quad0 = new Quadrado(ponto01, 3);
        System.out.println(quad0.toString());
        
        Retangulo ret0 = new Retangulo(ponto01, 3, 5);
        System.out.println(ret0.toString());
        
        Ponto3D pont0 = new Ponto3D(3, 5, 8);
        Ponto3D pont1 = new Ponto3D(7, 4, 8);
        System.out.println(pont0);
        pont0.moveXZ(3,4);
        System.out.println(pont0);
        
        SegmentoReta3D segrt1 = new SegmentoReta3D(pont0, pont1);
        System.out.println(segrt1);
        Ponto3D pont2 = segrt1.getP0();
        pont2.moveXZ(9, 5);
        System.out.println(segrt1);
    }
    
}
