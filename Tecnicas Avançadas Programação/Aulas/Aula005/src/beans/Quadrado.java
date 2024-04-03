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
public class Quadrado implements Figura2D{
    private Ponto2D p0;
    private double lado;

    public Quadrado(Ponto2D p0, double lado) {
        this.p0 = p0;
        this.lado = lado;
    }    
    
    public Ponto2D getP0() {
        return p0;
    }
    
    public Ponto2D calcP1(){
        return new Ponto2D(p0.getX()+lado, p0.getY());
    }
    
    public Ponto2D calcP2(){
        return new Ponto2D(p0.getX(), p0.getY()+lado);
    }
    
    public Ponto2D calcP3(){
        return new Ponto2D(p0.getX()+lado, p0.getY()+lado);
    }

    public double getLado() {
        return lado;
    }

    @Override
    public double area() {
        return lado*lado;
    }

    @Override
    public double perimetro() {
        return 4*lado;
    }

    @Override
    public void moveX(double dX) {
        p0.moveX(dX);
    }

    @Override
    public void moveY(double dY) {
        p0.moveX(dY);
    }

    @Override
    public void moveXY(double dX, double dY) {
        p0.moveXY(dX, dY);
    }

    @Override
    public String toString() {
        return "Quadrado{" + "p0=" + p0
                + "\n ,p1=" + calcP1()
                + "\n ,p2=" + calcP2()
                + "\n ,p3=" + calcP3()
                + "\n ,area=" + area()
                + "\n ,perimetro=" + perimetro()
                + ", lado=" + lado + '}';
    }
}
