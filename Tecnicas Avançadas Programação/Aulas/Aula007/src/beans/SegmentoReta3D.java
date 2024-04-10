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
public class SegmentoReta3D implements Objeto3D{
    private Ponto3D p0;
    private Ponto3D p1;

    public SegmentoReta3D(Ponto3D p0, Ponto3D p1) {
        this.p0 = new Ponto3D(p0.getX(), p0.getY(), p0.getZ());
        this.p1 = new Ponto3D(p1.getX(), p1.getY(), p1.getZ());
    }

    public Ponto3D getP0() {
        return new Ponto3D(p0.getX(), p0.getY(), p0.getZ());
    }

    public Ponto3D getP1() {
        return new Ponto3D(p1.getX(), p1.getY(), p1.getZ());
    }

    @Override
    public String toString() {
        return "SegmentoReta3D{" + "p0=" + p0 + 
                "/n, p1=" + p1 + '}';
    }

    @Override
    public void moveZ(double dZ) {
        p0.moveZ(dZ);
        p1.moveZ(dZ);
    }

    @Override
    public void moveXZ(double dX, double dZ) {
        p0.moveXZ(dX, dZ);
        p1.moveXZ(dX, dZ);
    }

    @Override
    public void moveYZ(double dZ, double dY) {
        p0.moveYZ(dZ, dY);
        p1.moveYZ(dZ, dY);
    }

    @Override
    public void moveX(double dX) {
        p0.moveX(dX);
        p1.moveX(dX);
    }

    @Override
    public void moveY(double dY) {
        p0.moveY(dY);
        p1.moveY(dY);
    }

    @Override
    public void moveXY(double dX, double dY) {
        p0.moveXY(dX, dY);
        p1.moveXY(dX, dY);
    }
    
}
