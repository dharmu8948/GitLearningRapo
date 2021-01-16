import java.sql.*;
class jdbcDemo
{
	public static void main(String[] args)throws Exception
	{
		class.forName("oracle.jdbc.OracleDriver");
		Connection con = driverManager.getConnection(url,user,pass);
		Statement st = con.createStatement();
		ResultSet rst = st.executeQuery("Select * from employees");
		while(rst.next())
		{
			System.out.println(rst.getInt(1)+" .. "+rst.getString()+" ... "+rst.getDouble());
        }
    con.close();
	}
}	