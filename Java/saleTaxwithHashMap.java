import java.text.DecimalFormat;
import java.util.*;

public class game_logs {
    public static void main(String args[]) {
        Scanner kb = new Scanner(System.in);
        int numOfAnimals = kb.nextInt();
        int numOfItem = kb.nextInt();
        String foodName;
        double foodCost;

        Map<String, Double> data = new HashMap<String, Double>();

        while(numOfItem >= 1){
            kb.nextLine();
            foodName = kb.nextLine();
            foodCost = kb.nextDouble();
            data.put(String.valueOf(foodName), foodCost);
            numOfItem--;
        }
        double monthlySale = kb.nextDouble();
        String provinceName = kb.nextLine();

        printItemizedItem(data, monthlySale, provinceName);
    }

    public static void printItemizedItem(Map<String, Double> data, double monthlySale, String provinceName){
        System.out.println("Itemized costs:");
        double totalWeeklyCost = 0;
        for(String i: data.keySet()){
            System.out.println("\t - " + i + ": " + data.get(i));
            totalWeeklyCost = totalWeeklyCost + data.get(i);
        }
        double monthlyCost = totalWeeklyCost * 4;
        double saleTax = 0;
        double monthlyEarning = 0;

        if(Objects.equals(provinceName, "AB") || Objects.equals(provinceName, "NT") || Objects.equals(provinceName, "NU") || Objects.equals(provinceName, "YT")){
            saleTax = monthlySale * .05;
            monthlyEarning = monthlySale - (monthlyCost+saleTax);
        }else if(Objects.equals(provinceName, "SK")){
            saleTax = monthlySale * .11;
            monthlyEarning = monthlySale - (monthlyCost+saleTax);
        }else if(Objects.equals(provinceName, "NS") || Objects.equals(provinceName, "NL") || Objects.equals(provinceName, "PEI") || Objects.equals(provinceName, "NB")){
            saleTax = monthlySale * .15;
            monthlyEarning = monthlySale - (monthlyCost+saleTax);
        }else if(Objects.equals(provinceName, "BC") || Objects.equals(provinceName, "MB")){
            saleTax = monthlySale * .12;
            monthlyEarning = monthlySale - (monthlyCost+saleTax);
        }else if(Objects.equals(provinceName, "ON")){
            saleTax = monthlySale * .13;
            monthlyEarning = monthlySale - (monthlyCost+saleTax);
        }else if(Objects.equals(provinceName, "QC")){
            saleTax = monthlySale * .1498;
            monthlyEarning = monthlySale - (monthlyCost+saleTax);
        }
        System.out.println("Total weekly cost: " + totalWeeklyCost +"\n");
        System.out.println("The monthly costs are: " + monthlyCost);
        System.out.println("The monthly sales are: " + monthlySale);
        System.out.println("The sale tax was " + saleTax);
        System.out.println("The monthly earnings are " + monthlyEarning);
    }
}

