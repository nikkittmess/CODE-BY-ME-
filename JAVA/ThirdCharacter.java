import java.util.Scanner;
public class ThirdCharacter {
    // Method to extract the third character of a string input in alphabetical order
    public static char third3(String input) {
        // Convert the input string to lowercase and then to character array
        char[] charArray = input.toLowerCase().toCharArray();
        
        // Sort the character array
        java.util.Arrays.sort(charArray);
        
        // Check if there are at least 3 characters in the sorted array
        if (charArray.length >= 3) {
            // The third character when sorted is at index 2
            return charArray[2];
        } else {
            // If the input string has less than 3 characters, return '\0' (null character)
            return '\0';
        }
    }
    
    // Overloaded method to extract the third character of a string input in alphabetical order
    public static char third3(char[] inputArray) {
        // If the input array has at least 3 characters
        if (inputArray.length >= 3) {
            // Convert the array to lowercase and then sort it
            java.util.Arrays.sort(inputArray);
            
            // The third character when sorted is at index 2
            return inputArray[2];
        } else {
            // If the input array has less than 3 characters, return '\0' (null character)
            return '\0';
        }
    }

    public static void main(String[] args) {
        // Test the method with different inputs
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter input");
        // Method called with string input
        String inputString = sc.nextLine();
        System.out.println("Third character in alphabetical order from '" + inputString + "': " + third3(inputString));
        
    
    }
}
