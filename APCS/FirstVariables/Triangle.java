/* lcannon
   9/12
   triangle calculation
*/ 

import java.util.Scanner;
import java.util.*;

public class Triangle
{
   public static void main(String[] args)
   {
      // initalizing the scanner
      Scanner reader = new Scanner(System.in);
      
      System.out.println("Enter Side 1: ");
      double side1 = reader.nextInt();
      System.out.println("Enter Side 2: ");
      double side2 = reader.nextInt();  
      System.out.println("Enter Angle A : ");
      double angle = reader.nextInt();
      
      
      double side3 = Math.sqrt(Math.pow(side1, 2) + Math.pow(side2, 2) - 2*(side1)*(side2)*Math.cos(Math.toRadians(angle)));
      System.out.println("Side Three = " + side3);
      
      double perimeter = side1 + side2 + side3;
      System.out.println("Triangle Perimeter: " + perimeter);
      
      double angle2 = Math.acos((Math.pow(side2,2)+Math.pow(side3,2) - Math.pow(side1,2)) / (2*(side2)*(side3)));
      angle2 = Math.toDegrees(angle2);
      System.out.println("Angle: " + angle2);
      
      double angle3 = 180 - (angle + angle2);
      System.out.println("Angle 3: " + angle3);
      
      double area = ((side1)+(side2)+(side3)) / 2;
      System.out.println("Area: " + area);
   }


}