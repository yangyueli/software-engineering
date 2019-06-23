package servlets;

import java.io.IOException;
import java.util.ArrayList;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;
import Student.bean.student;

/**
 * 用来接收客户端的后缀为do的请求

 *
 */
@WebServlet("*.do")
public class studentController extends HttpServlet {

	private static final long serialVersionUID = 1L;

	public void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		doPost(request,response);
	}

	public void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {

		request.setCharacterEncoding("utf-8");
		
		String actionUrl=request.getServletPath();		

		if(actionUrl.equals("/index.do")){			//查询所有学生信息
			ArrayList<student> list=student.getstudentList();  // 调用student的getstudentList方法查询所有图书，赋值给list
			request.setAttribute("list", list);					//在request增加属性list，其结果为list对象
			request.getRequestDispatcher("/index.jsp").forward(request, response);//重定向至index.jsp进行显示
		
		}else if(actionUrl.equals("/add.do")){			//新增学生
			
			
			String name = request.getParameter("name");
			String gender = request.getParameter("gender");
			String birthday = request.getParameter("birthday");
			String address = request.getParameter("address");
			
			int r = student.addstudent(name, gender, birthday,address);	//调用student的addstudent方法完成
			if(r==1)
				request.getRequestDispatcher("success.html").forward(request, response); //成功的话重定向至success.html
			else
				request.getRequestDispatcher("failure.html").forward(request, response); //失败的话重定向至failure.html
		
		}else if(actionUrl.equals("/edit.do")){			//客户端要对指定sno的学生进行修改			
			String sno=request.getParameter("sno");
			student bi=student.getstudentBysno(sno);		//调用student的getstudentBysno方法获取学生信息，赋值给bi对象
			request.setAttribute("bi", bi);				//将bi对象增加到request的属性中
			request.getRequestDispatcher("/edit.jsp").forward(request, response);//重定向至edit.jsp进行显示
		
		}else if(actionUrl.equals("/update.do")){	    //用户输入要修改的学生的信息之后需要保存到数据库
			String sno=request.getParameter("sno");
			String name = request.getParameter("name");
			String gender = request.getParameter("gender");
			String birthday = request.getParameter("birthday");
			String address = request.getParameter("address");
			int r=student.updatestudent(sno,name, gender, birthday,address);//调用student的updatestudent方法实现
			if(r==1)
				request.getRequestDispatcher("/success.html").forward(request, response);//成功的话重定向至success.html
			else
				request.getRequestDispatcher("/failure.html").forward(request, response);//失败的话重定向至failure.html
		
		}else if(actionUrl.equals   ("/delete.do")){			//用户需要删除指定sno的学生
			String sno=request.getParameter("sno");
			int r=student.deletestudent(sno);			//调用student的deletestudent方法实现
			if(r==1)
				request.getRequestDispatcher("/success.html").forward(request, response);//成功的话重定向至success.html
			else
				request.getRequestDispatcher("/failure.html").forward(request, response);//失败的话重定向至failure.html
		}
	}

}
