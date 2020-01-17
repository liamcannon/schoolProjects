/**
 @author Kendra Knudson
 modified by ___________________
 */
import java.util.*;
import java.io.File;
public class Sudoku {
	Cell[][] puzzlematrix;
	
	public Sudoku(){
		puzzlematrix = new Cell[9][9];
		readPuzzleFromFile(new File("rowcoltest.txt"));
	}
	public static void main(String[] args){
			Sudoku game = new Sudoku();
		
			SudokuGui gui = new SudokuGui(game);
	}
	public void readPuzzleFromFile(File f){
		try{
			Scanner sc = new Scanner(f);
			for (int x = 0; x < puzzlematrix.length; x++){
				String line = sc.nextLine();
				Scanner lineScanner = new Scanner(line);
				for (int y = 0; y < puzzlematrix[x].length; y++){
					String s = lineScanner.next();
					if (s.equals(".")){
						puzzlematrix[x][y] = new Cell(x,y);
					}
					else{
						int i = Integer.parseInt(s);
						puzzlematrix[x][y] = new Cell(i,x,y);
					}
				}
			}
		}
		catch(Exception e){
			System.err.println("Error reading file");
		}
	}
	
	public void changeCell(int row, int col, int num){
		puzzlematrix[row][col].setNum(num);
	}
	public Cell getCell(int row,int col){
		return puzzlematrix[row][col];
		
	}
	public void changePencilMark(int row, int col, int index, int num){
		puzzlematrix[row][col].setPencilMarks(index, num);
	}
	public void printCell(int row, int col){
		//
	}
	public void printMatrix(){
		//
		
	}
	public boolean checkFinished(){
		//
      return checkCol(1); 
	}
	
	private boolean checkRow(int row){
		//
      ArrayList<Integer> array = new ArrayList<Integer>(9);
      for(int x = 1; x < 10; x++)
      {
         array.add(x);
      }
      
      for(int x = 0; x < 9; x++)
      {
         int hold = puzzlematrix[row][x].getNum();
         int pos = array.indexOf(hold);
         System.out.println(hold + " " + pos);
         
         if(pos == -1)
            return false;
         else
            array.remove(pos); 
      }
      return true;
	}
	   
	
	private boolean checkCol(int col){
		//
      ArrayList<Integer> array = new ArrayList<Integer>(9);
      for(int x = 1; x < 10; x++)
      {
         array.add(x);
      }
      for(int x = 0; x < 9; x++)
      {
         int hold = puzzlematrix[x][col].getNum();
         int pos = array.indexOf(hold);
         System.out.println(hold + " " + pos);
         if(pos == -1)
            return false;
         else
            array.remove(pos); 
      }

      return true;
	}
      

	private boolean checkBox(int row, int col){
		//
      ArrayList<Integer> array = new ArrayList<Integer>(9);
      for(int x = 1; x < 10; x++)
      {
         array.add(x);
      }

      for(int x = col; x < col+3; x++)
      {
         for(int y = row; y<row+3;y++)
         {
            int hold = puzzlematrix[x][y].getNum();
            int pos = array.indexOf(hold);
            
            if(pos == -1)
               return false;
            else 
               array.remove(pos);
         }
      }
      
      return false; 
	} 
}
