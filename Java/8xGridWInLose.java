import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import java.util.Scanner;

public class game_logs {
    public static void main(String args[]) {
        Scanner kb = new Scanner(System.in);
        int[][] Grid = new int[8][8];
        String x = kb.next();
        int totalBattleShip = 0;
        int count = 0;
        while(!Objects.equals(x, "-1")){
            if(count == 0){
                totalBattleShip = Integer.parseInt(x);
            }
            x = kb.next();
            char row = x.charAt(1);
            char column = x.charAt(0);
            if(!Objects.equals(x, "-1")){
                if(totalBattleShip > count){
                    setGrid(Grid, column, row, false);
                } else{
                    setGrid(Grid, column, row, true);
                }
                count++;
            }
        }
        printGrid(Grid);
        if(evaluateGrid(Grid) >= 1){
            System.out.println("Player Loses") ;
        }else{
            System.out.println("Player Wins");
        }
    }

    public static void setGrid(int[][] Grid, char column, char row, boolean update) {
        int rV = row - 49;
        int cValue = column - 65;
        if ((rV < 0 || rV > 7)) {
            return;
        }
        if(update){
            if(Grid[rV][cValue] == 1){
                Grid[rV][cValue] = 2;
            } else{
                Grid[rV][cValue] = 3;
            }
        }else{
            Grid[rV][cValue] = 1;
        }
    }

    public static int evaluateGrid (int[][] gameGrid) {
        int reader = 0;
        for (int a = 0; a < 8 ; a++){
            for (int b = 0; b < 8; b ++){
                if(gameGrid[a][b] == 2){
                    reader++;
                }
            }
        }
        return reader;
    }

    public static void printGrid(int[][] Grid) {
        for (int q = 0; q < Grid.length; q++) {
            for (int z = 0; z < Grid[0].length; z++) {
                if(Grid[q][z] == 2){
                    System.out.print("X ");
                } else if(Grid[q][z] == 3){
                    System.out.print("O ");
                } else{
                    System.out.print("_ ");
                }
            }
            System.out.println();
        }
    }
}
