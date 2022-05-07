public static void main(String args[]) {
        Scanner kb = new Scanner(System.in);
        int numOfAnimals = kb.nextInt();
        double foodCost = kb.nextDouble();
        double sum = 0;
        while(foodCost > 1){
            sum = foodCost + sum;
            foodCost = kb.nextDouble();
        }

        String[] line = kb.nextLine().split(" ");
        double sales = Double.parseDouble(line[0]);
        String province = line[1];
        double monthlyCost = sum * 4;
        double saleTax = 0;
        double monthlyEarning = 0;

        if(Objects.equals(province, "AB") || Objects.equals(province, "NT") || Objects.equals(province, "NU") || Objects.equals(province, "YT")){
            saleTax = sales * .05;
            monthlyEarning = sales - (monthlyCost+saleTax);
        }else if(Objects.equals(province, "SK")){
            saleTax = sales * .11;
            monthlyEarning = sales - (monthlyCost+saleTax);
        }else if(Objects.equals(province, "NS") || Objects.equals(province, "NL") || Objects.equals(province, "PEI") || Objects.equals(province, "NB")){
            saleTax = sales * .15;
            monthlyEarning = sales - (monthlyCost+saleTax);
        }else if(Objects.equals(province, "BC") || Objects.equals(province, "MB")){
            saleTax = sales * .12;
            monthlyEarning = sales - (monthlyCost+saleTax);
        }else if(Objects.equals(province, "ON")){
            saleTax = sales * .13;
            monthlyEarning = sales - (monthlyCost+saleTax);
        }else if(Objects.equals(province, "QC")){
            saleTax = sales * .1498;
            monthlyEarning = sales - (monthlyCost+saleTax);
        }
        System.out.println("The cost to feed " + numOfAnimals + " farm animals costs each week is: " + df.format(sum) + " CAD\n");
        System.out.println("\nThe monthly costs are: " + df.format(monthlyCost) + " CAD");

        System.out.println("The monthly sales are: " + sales + " CAD\n");
        System.out.println("The sale tax was " + saleTax);
        System.out.println("\nThe monthly earnings were " + monthlyEarning);

    }