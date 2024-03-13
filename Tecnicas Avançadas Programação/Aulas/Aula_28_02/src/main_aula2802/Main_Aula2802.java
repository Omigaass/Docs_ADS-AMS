/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package main_aula2802;

import beans.Pessoa;
import beans.Aluno;
import beans.Professor;

/**
 *
 * @author aluno
 */
public class Main_Aula2802 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Pessoa pessoa01 = new Pessoa("59.444.492-5", "Miguel Antonio Pereira ribeiro", "miguelanperibeiro@gmail.com", "(12) 99182-7172");
        Object aluno01 = new Aluno("12345", "ADS", "FATEC_Taubate", "12.243.213", "Miguel Antonio", "miguelanperibeiro@gmail.com", "(12) 99182-7172");
        System.out.println(aluno01.toString());
        String RG = pessoa01.getRG();
        System.out.println("RG:" + RG);
        pessoa01.setNome("Miguel Antonio");
        System.out.println("Ola mundo! " + pessoa01.toString());
    }
    
}
