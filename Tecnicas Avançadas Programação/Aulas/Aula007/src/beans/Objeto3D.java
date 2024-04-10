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
public interface Objeto3D extends Objeto2D {
    void moveZ(double dZ);
    void moveXZ(double dX, double dZ);
    void moveYZ(double dZ, double dY);
}
