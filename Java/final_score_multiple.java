import java.text.DecimalFormat;
import java.util.*;

public class game_logs {
    public static void main (String a []){
        Scanner kb = new Scanner(System.in);
        int students = 0;
        try{
            students = kb.nextInt();
        }catch(NumberFormatException e){
            e.printStackTrace();
        }
        kb.nextLine();
        double classAverageTest = 0, classAverageAssignment = 0, classAveragePracticum = 0, classAveragePOD = 0;
        double lowestTest = 0, lowestAssignment = 0, lowestPracticum = 0, lowestPOD = 0;
        double highestTest = 0, highestAssignment = 0, highestPracticum = 0, highestPOD = 0;

        for(int j = 0; j < students; j++){
            // taking user input and split them
            String[] info = new String[students];
            info[j] = kb.nextLine();
            String[] values = info[j].split(" ");
            String studentBanner = values[0];
            String[] numbers = Arrays.copyOfRange(values, 1, values.length);

            int[] test = new int [5];
            int[] assignment = new int [6];
            int[] practicums = new int [4];
            int[] pod = new int [11];

            double testSum = 0, assignmentSum = 0, practicumSum = 0, podSum = 0;
            int index = 0;
            for(int i = 0; i < numbers.length; i++){
                if(i < 5){
                    test[i] = Integer.parseInt(numbers[i]);
                    testSum += test[i];
                }
                else if(i < 11){
                    if(i == 5){
                        index = 0;
                    }
                    assignment[index] = Integer.parseInt(numbers[i]);
                    index++;
                }
                else if(i < 15){
                    if(i == 11){
                        index = 0;
                    }
                    practicums[index] = Integer.parseInt(numbers[i]);
                    index++;
                }
                else {
                    if(i == 15){
                        index = 0;
                    }
                    pod[index] = Integer.parseInt(numbers[i]);
                    index++;
                }
            }
            double averageTestMarks = (testSum / test.length)*0.4;

            // assignment
            Arrays.sort(assignment);
            for (int i =1; i< assignment.length; i++){
                assignmentSum += assignment[i];
            }
            double averageAssignmentMarks = (assignmentSum / assignment.length)*0.3;

            // practicum
            for (int practicum : practicums) {
                practicumSum += practicum;
            }
            double averagePracticumsMarks = (practicumSum / practicums.length)*0.25;

            // POD
            Arrays.sort(pod);
            for(int i =1; i<pod.length-1;i++){
                podSum += pod[i];
            }
            double averagePodMarks = (podSum / pod.length)*0.05;

            double totalAverage=(averageTestMarks + averageAssignmentMarks + averagePracticumsMarks + averagePodMarks);
            System.out.println("Average test mark: " + averageTestMarks + " " + testSum + " " + totalAverage);
            classAverageTest += averageTestMarks;
            classAverageAssignment += averageAssignmentMarks;
            classAveragePracticum += averagePracticumsMarks;
            classAveragePOD += averagePodMarks;

            System.out.println(studentBanner +" " + scoreToLetterGrade(Math.ceil(totalAverage)));
        }

        System.out.println("Class Average:\nTests: " + classAverageTest + " - " + "Assignments: " + classAverageAssignment + " - " + "Practicums: " + classAveragePracticum + " - " + "PoDs: " + classAveragePOD);
        System.out.println("Lowest Scores:\nTests: " + classAverageTest + " - " + "Assignments: " + classAverageAssignment + " - " + "Practicums: " + classAveragePracticum + " - " + "PoDs: " + classAveragePOD);
        System.out.println("Highest Scores:\nTests: " + classAverageTest + " - " + "Assignments: " + classAverageAssignment + " - " + "Practicums: " + classAveragePracticum + " - " + "PoDs: " + classAveragePOD);


    }

    public static String scoreToLetterGrade(double score){

        String result ="";
        if (score<=49){
            result = "F";
        }else if(score>=50 && score<=54){
            result = "D";
        }
        else if (score>=55 && score<=59){
            result = "C-";
        }
        else if (score>=60 && score<=64){
            result = "C";
        }
        else if (score>=65 && score<=69){
            result = "C+";
        }
        else if (score == 70 || score == 71 || score == 72 || score == 73){
            result = "B-";
        }
        else if (score>=73 && score<= 76){
            result = "B";
        }
        else if (score>= 77 && score<=79){
            result = "B+";
        }
        else if (score>=80 && score<=84){
            result = "A-";
        }
        else if (score>=85 && score<=89){
            result = "A";
        }
        else if ( score>=90 && score<=100){
            result = "A+";
        }
        return result;
    }
}

