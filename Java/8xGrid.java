import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class game_logs {
    public static void setGrid(char arr[][], char x, char y) {
        int col = (int) x - 65;
        int row = (int) y - 49;
        arr[row][col] = 'T';
    }

    public static void printGrid(char arr[][]) {
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                System.out.print(arr[row][col] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        char grid[][] = new char[8][8];

        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                grid[row][col] = '-';
            }
        }
        int n;
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        while (n > 0) {
            String str = sc.next();
            char a = str.charAt(0);
            char b = str.charAt(1);
            setGrid(grid, a, b);
            n -= 1;
        }
        printGrid(grid);
    }

}

