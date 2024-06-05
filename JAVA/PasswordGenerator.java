import java.util.Random;
import java.util.Scanner;
public class PasswordGenerator {
    public static void main(String[] args) {
        
        int length = getPasswordLength();
        String password = generatePassword(length);
        System.out.println("Generated Password: " + password);
    }

    public static int getPasswordLength() {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter password size");
        int size=sc.nextInt();
        sc.close();
        return size;
    }

    public static String generatePassword(int length) {
        String upperCaseChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String lowerCaseChars = "abcdefghijklmnopqrstuvwxyz";
        String numbers = "0123456789";
        String specialChars = "!@#$%^&*()-_=+[{]};:<>|./?";

        String allowedChars = upperCaseChars + lowerCaseChars + numbers + specialChars;

        Random random = new Random();
        StringBuilder password = new StringBuilder();

       
        // Ensure at least one uppercase, one lowercase, and one number in the password
        password.append(upperCaseChars.charAt(random.nextInt(upperCaseChars.length())));
        password.append(lowerCaseChars.charAt(random.nextInt(lowerCaseChars.length())));
        password.append(numbers.charAt(random.nextInt(numbers.length())));

        // Fill the rest of the password with random characters
        for (int i = 0; i < length - 3; i++) {
            password.append(allowedChars.charAt(random.nextInt(allowedChars.length())));
        }

        // Shuffle the password
        char[] passwordArray = password.toString().toCharArray();
        for (int i = 0; i < passwordArray.length; i++) {
            int randomIndex = random.nextInt(passwordArray.length);
            char temp = passwordArray[i];
            passwordArray[i] = passwordArray[randomIndex];
            passwordArray[randomIndex] = temp;
        }

        return new String(passwordArray);
    }
}
