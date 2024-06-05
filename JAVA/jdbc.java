import java.sql.*;
public class jdbc
{
    public static void main(String[] args)
    {
        String url="jdbc:mysql://localhost:3306/mydatabase";
        String username="root";
        String password="password";
        
        //SELECT ALL 
        String query="SELECT * FROM mytable";
        
        //SELECT 2 TABLES
        String query="SELECT VALUES(name,id) FROM mytable";
        
        //INSERT VALUES
        String query="INSERT INTO mytable(name,id) VALUES(?,?)";
        
        //DELETE VALUES
        String query="DELETE FROM mytable WHERE name=?";
        try
        {
            Connection c=DriverManager.getConnection(url,username,password);
            PreparedStatement statement=c.prepareStatement(query);
        
            //INSERT STRING
            statement.setString(1,"Nikkitt");
        
            //INSERT INT
            statement.setInt(2,2162609);
        
            //DISPLAY ALL VALUES IN FIELDS
            while(statement.next())
            {
                String name=statement.getString("name");
                int id=statement.getInt("id");
                System.out.println(name,id);
            }
            
            //to execute statement
            statement.executeUpdate();
            
            //manadatory closing 
            c.close();
            statement.close();
            
           }
            
        catch(SQLException e)
        {
                    e.printStackTrace();
        }
        
     }
}
