// lcannon, 19/9/18, Jam Project
// importing a scanner
import java.util.Scanner;

public class Jam
{
   public static void main(String[] args)
   {
   Scanner reader = new Scanner(System.in);
   
   System.out.println("How many jars of Jam are you shipping");
   
   double jams = reader.nextDouble();
   
   double jamOz = (jams*21.0);
   // getting the amount of cartons
   double cartons = jams/12;
   // rounding to an integer for the cartons ie. 1.5 ->2
   double totalCartons = (int)(cartons+(11.0/12.0));
   // getting the weight of the cartons in ounces
   double cartonWeight = (totalCartons*25);
   // getting the total weight of jam and carton
   double totalWeight = (jamOz+cartonWeight)/16;
   // rounding the total weight
   totalWeight = (int)(totalWeight+(11.0/12.0));
   // getting the price of all the weight combined
   double weightPrice = (totalWeight*.96);
   // final algorithm getting the weight price with the amount of cartons * 1.44 because thats how much it costs for a carton plus the sir charge
   double finalCost = weightPrice+(totalCartons*1.44)+3.00;
   
   System.out.println("Your total cost is $"+ finalCost);
   
   }

}

