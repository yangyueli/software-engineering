package Student.bean;

import java.sql.*;
import java.util.*;

/**
 * 构造student对象，对应数据库的student表
 * 提供了多个静态方法完成student对象与对应数据库表的所有新增、查询、修改、删除等操作
 
 *
 */
public class student {
	
	private String sno;
	private String name;
	private String gender;
	private String birthday;
	private String address;
	public String getname() {
		return name;
	}
	public void setname(String name) {
		this.name = name;
	}
	public String getgender() {
		return gender;
	}
	public void setgender(String gender) {
		this.gender = gender;
	}
	public String getbirthday() {
		return birthday;
	}
	public void setbirthday(String birthday) {
		this.birthday = birthday;
	}
	public void setsno(String sno) {
		this.sno = sno;
	}
	public String getsno() {
		return sno;
	}
	public void setaddress(String address) {
		this.address = address;
	}
	public String getaddress() {
		return address;
	}
	/**
	 * 从student表中获取所有的图书信息
	 * @return student的数组
	 */
	public static ArrayList<student> getstudentList(){
		ArrayList<student> list=new ArrayList<student>();
		String sql="select * from student";
		DBBean jdbc=new DBBean();
		ResultSet rs=jdbc.executeQuery(sql);
        try {
			while(rs.next()){
				student bi=new student();
				bi.setsno(rs.getString("sno"));
				bi.setname(rs.getString("name"));
				bi.setgender(rs.getString("gender"));
				bi.setbirthday(rs.getString("birthday"));
				bi.setaddress(rs.getString("address"));
				list.add(bi);
			}
			 rs.close();
		} catch (SQLException e) {
			e.printStackTrace();
		}
        jdbc.close();
        return list;
	}

	/**
	 * 获取指定sno的图书信息
	 * @param sno 图书sno
	 * @return 一个student对象
	 */
	public static student getstudentBysno(String sno){
		String sql="select * from student where sno="+sno;
		DBBean jdbc=new DBBean();
		ResultSet rs=jdbc.executeQuery(sql);
		student bi=new student();
        try {
			if(rs.next()){				
				bi.setsno(rs.getString("sno"));
				bi.setname(rs.getString("name"));
				bi.setgender(rs.getString("gender"));
				bi.setbirthday(rs.getString("birthday"));
				bi.setaddress(rs.getString("address"));
			}
			 rs.close();
		} catch (SQLException e) {
			e.printStackTrace();
		}
        jdbc.close();
        return bi;
	}

	/**
	 * 更新指定sno的学生信息
	
	 * @return 修改的结果：1代表成功，0代表没有更新
	 */
	public static int updatestudent(String sno,String name,String gender,String birthday,String address){
		int result=0;
		String sql = "update student set name='" + name + "',gender='" + gender +"',address='" + address + "',birthday='" + birthday+ "' where sno=" + sno;	
		DBBean jdbc=new DBBean();
		result=jdbc.executeUpdate(sql);
		jdbc.close();
		return result;
	}
	
	/**
	 * 删除指定sno的图书
	 * @param sno 信息sno
	 * @return 删除的结果：1代表成功，0代表没有删除
	 */
	public static int deletestudent(String sno){
		int result=0;
		String sql="delete from student where sno="+sno;
		DBBean jdbc=new DBBean();
		result=jdbc.executeUpdate(sql);
		jdbc.close();
		return result;
	}
	
	/**
	 * 增加一个学生
	 * 
	 
	 * @return 新增的结果：1代表成功，0代表没有增加
	 */
	public static int addstudent(String name,String gender,String birthday,String address){
		int result=0;
		String sql="insert into student values(null,'" + name + "','" + gender + "','" +birthday+ "','" + address + "')";
		DBBean jdbc=new DBBean();
		result=jdbc.executeUpdate(sql);
		jdbc.close();
		return result;
	}
}
