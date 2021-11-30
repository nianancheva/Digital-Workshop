package com.company;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        String[] tokens = scan.nextLine().split(" ");

        int[] numbers = new int[tokens.length];

        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = Integer.parseInt(tokens[i]);
        }

        boolean isTrion = true;

        for (int i = 1; i < numbers.length - 1; i++) {
//            if (numbers[i] >= numbers[i - 1] && numbers[i] >= numbers[i + 1]) {
//              isTrion = true;
//            } else if (numbers[i] <= numbers[i - 1] && numbers[i] <= numbers[i + 1]) {
//              isTrion = true;
//            } else {
//              isTrion = false;
//              break;
//            }

            if (!(numbers[i] >= numbers[i - 1] && numbers[i] >= numbers[i + 1])
                    && !(numbers[i] <= numbers[i - 1] && numbers[i] <= numbers[i + 1])) {
                isTrion = false;
                break;
            }
        }

        if (isTrion) {
            System.out.println("yes");
        } else {
            System.out.println("no");
        }

    }
}
