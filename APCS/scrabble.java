//lcannon

import java.util.Scanner;


public class scrabble{
   public static void main(String[] args){
   
     Scanner scn = new Scanner(System.in);
     int score = 0;
     int tempScore = 0;
     String input;
     System.out.println("cash me outside");
     input = scn.nextLine();
     input = input.toUpperCase();
    
     for(int x = 0; x < input.length(); x++)
     {
         tempScore = cVal(input.charAt(x));
         score = score + tempScore;    
     }
     System.out.println("you got " + score + " points, how bou dah");
     //1 = a, e, i, l, n, o, r, s, t, u
     //2 = d, g
     //3 = b, c, m, p, 
     //4 = f, h, v, w, y
     //5 = k
     //8 = j, x
     //10= q, z  
   }
   
   public static int cVal(char a){
   
      int place = (int)(a)-65;
      int[] pointValues = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
      //char scoreChar = listMinusOne.charAt(place);
     // int scoreInt = (int)(scoreChar)-47;
      int scoreInt = pointValues[place];
      
      return scoreInt;
      
   }
}  