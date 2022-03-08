import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class game_logs {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        String city_name = "";
        String datas = "";
        String[] line_dat;
        ArrayList<Integer> tempData = new ArrayList<>();
        int countWarmMonths = 0;

        System.out.print("cityName: ");
        city_name = in.nextLine();

        System.out.print("tempData: ");
        datas = in.nextLine();
        line_dat = datas.split(",");

        for(int i = 0; i < 12; i++){
            int temp = Integer.parseInt(line_dat[i]);
            if (temp >= 20){
                countWarmMonths++;
            }
        }

        System.out.println(city_name + " has " + countWarmMonths + " warm months.");

    }

}

