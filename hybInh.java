package lab5;
import java.util.Scanner;
abstract class shape {
    String color;
    boolean filled;
    shape() {
        color="";
        filled=true;
    }
    shape(String color,boolean filled) {
        this.color=color;
        this.filled=filled;
    }
    String getColor() {
        return color;
    }
    void setColor(String color){
        this.color=color;
    }
    boolean isFilled(){
        return filled;
    }
    void setFilled(boolean filled){
        this.filled=filled;
    }
    abstract double getArea();
    abstract double getPerimeter();
    public String toString(){
        return color;
    }
}

class circle extends shape {
    double radius;
    circle() {
        this.radius=0;
    }
    circle(double radius) {
        this.radius=radius;
    }
    circle(double radius,String color, boolean filled) {
        this.radius=radius;
        this.color=color;
        this.filled=filled;
    }
    double getRadius() {
        return radius;
    }
    void setRadius(double radius) {
        this.radius=radius;
    }
    double getArea() {
        double area;
        area=radius*radius*Math.PI;
        return area;
    }
    double getPerimeter() {
        double p;
        p= 2* radius*Math.PI;
        return p;
    }
    public String toString() {
        return "CIRCLE "+color+" "+isFilled();
    }
}

class rectangle extends shape{
    double width;
    double length;
    rectangle() {
        this.length=0;
        this.width=0;
    }
    rectangle(double width, double length) {
        this.width=width;
        this.length=length;
    }
    rectangle(double width, double length,String color, boolean filled) {
        this.length=length;
        this.width=width;
        this.color=color;
        this.filled=filled;
    }
    double getWidth() {
        return width;
    }
    void setWidth(double width) {
        this.width=width;
    }
    double getLength() {
        return length;
    }
    void setLength(double length) {
        this.length=length;
    }
    double getArea() {
        double area;
        area=length*width;
        return area;
    }
    double getPerimeter() {
        double p;
        p=2*(length+width);
        return p;
    }
    public String toString() {
        return "RECTANGLE : "+color+" "+isFilled();
    }
}

class square extends rectangle {
    double side;
    square() {
        this.side=0;
    }
    square(double side){
        this.side=side;
    }
    square(double side, String color, boolean filled) {
        this.side=side;
        this.color=color;
        this.filled=filled;
    }
    double getSide() {
        return side;
    }
    void setSide(double side) {
        this.side=side;
    }
    void setWidth(double side) {
        this.width=side;
    }
    void setLength(double side) {
        this.length=side;
    }
    public String toString() {
        return "SQUARE : "+color+" "+isFilled();
    }
}
class triangle extends shape{
    double s1,s2,s3;
    triangle() {
        this.s1=0;
        this.s2=0;
        this.s3=0;
    }
    triangle(double s1, double s2,double s3) {
        this.s1=s1;
        this.s2=s2;
        this.s3=s3;
    }
    triangle(double s1, double s2,double s3,String color, boolean filled) {
        this.s1=s1;
        this.s2=s2;
        this.s3=s3;
        this.color=color;
        this.filled=filled;
    }
    double getS1() {
        return s1;
    }
    double getS2() {
        return s2;
    }
    double getS3() {
        return s3;
    }
    void sets1(double s1) {

        this.s1=s1;
    }
    void sets2(double s2) {

        this.s2=s2;
    }
    void sets3(double s3) {

        this.s3=s3;
    }
    double getArea() {
        double area;
        double s=(s1+s2+s3)/2;
        double ar=s*(s-s1)*(s-s2)*(s-s3);
        area=Math.sqrt(ar);
        return area;
    }
    double getPerimeter() {
        double p;
        p=s1+s2+s3;
        return p;
    }
    public String toString() {
        return "TRIANGLE : "+color+" "+isFilled();
    }
}
public class hybInh {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("MENU \nPress 1 for Circle \nPress 2 for rectangle \nPress 3 for square \nPress 4 for triangle \nPress 5 to exit");
        int choice=0;
        while (choice!=5){
            System.out.print("\nEnter your choice : ");
            choice=sc.nextInt();
            switch (choice){
                case(1):System.out.print("CIRCLE \nEnter radius : ");
                        double s=sc.nextDouble();
                        System.out.print("Enter color : ");
                        String c1=sc.next();
                        System.out.print("Enter fill (true/false) : ");
                        boolean f1=sc.nextBoolean();
                        circle c=new circle(s,c1,f1);
                        c.setRadius(c.getRadius());
                        double areaCircle=c.getArea();
                        double periCircle=c.getPerimeter();
                        System.out.println("\n*******DISPLAY*******\n");
                        System.out.println("Area of Circle : "+areaCircle);
                        System.out.println("Perimeter of Circle : "+periCircle);
                        System.out.println(c.toString());
                        System.out.println("\n-------------------------------------");
                        break;
                case(2):System.out.print("RECTANGLE \nEnter length : ");
                        double l=sc.nextDouble();
                        System.out.print("Enter width : ");
                        double w=sc.nextDouble();
                        System.out.print("Enter color : ");
                        String c2=sc.next();
                        System.out.print("Enter fill (true/false) : ");
                        boolean f2=sc.nextBoolean();
                        rectangle r=new rectangle(l,w,c2,f2);
                        r.setWidth(r.getWidth());
                        r.setLength(r.getLength());
                        double areaRect= r.getArea();
                        double periRect=r.getPerimeter();
                        System.out.println("\n*******DISPLAY*******\n");
                        System.out.println("Area of Rectangle : "+areaRect);
                        System.out.println("Perimeter of Rectangle : "+periRect);
                        System.out.println(r.toString());
                        System.out.println("\n-------------------------------------");
                        break;
                case(3):System.out.print("SQUARE \nEnter side : ");
                        double side=sc.nextDouble();
                        System.out.print("Enter color : ");
                        String c3=sc.next();
                        System.out.print("Enter fill (true/false) : ");
                        boolean f3=sc.nextBoolean();
                        square sq=new square(side,c3,f3);
                        sq.setWidth(sq.getSide());
                        sq.setLength(sq.getSide());
                        double areaSquare=sq.getArea();
                        double periSquare=sq.getPerimeter();
                        System.out.println("\n*******DISPLAY*******\n");
                        System.out.println("Area of Square : "+areaSquare);
                        System.out.println("Perimeter of Square : "+periSquare);
                        System.out.println(sq.toString());
                        System.out.println("\n-------------------------------------");
                        break;
                case(4):System.out.print("TRIANGLE \nEnter side 1 : ");
                    double a=sc.nextDouble();
                    System.out.print("Enter side 2 : ");
                    double b=sc.nextDouble();
                    System.out.print("Enter side 3 : ");
                    double x=sc.nextDouble();
                    System.out.print("Enter color : ");
                    String c4=sc.next();
                    System.out.print("Enter fill (true/false) : ");
                    boolean f4=sc.nextBoolean();
                    triangle t=new triangle(a,b,x,c4,f4);
                    t.sets1(t.getS1());
                    t.sets2(t.getS2());
                    t.sets3(t.getS3());
                    double areaTri= t.getArea();
                    double periTri=t.getPerimeter();
                    System.out.println("\n*******DISPLAY*******\n");
                    System.out.println("Area of Triangle : "+areaTri);
                    System.out.println("Perimeter of Triangle : "+periTri);
                    System.out.println(t.toString());
                    System.out.println("\n-------------------------------------");
                    break;
                case(5):break;
                default:System.out.println("Invalid choice");
                        System.out.println("\n-------------------------------------");
            }
        }
    }
}
