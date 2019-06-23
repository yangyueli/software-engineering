<!--编辑界面 add.html  李杨悦 -->
<%@ page import="Student.bean.student" pageEncoding="utf-8"%>
<html>
<head>
<title>修改图书信息</title>
<link rel="stylesheet" type="text/css" href="css/style.css">
</head>
<body>
	<%
	student bi = (student) request.getAttribute("bi");
	%>
	<form action="update.do" method="post">
		<input type="hidden" name="sno" value="<%=bi.getsno()%>">
		<table style="width: 50%">
			<caption>修改学生信息</caption>
			<tr>
				<th>姓名：</th>
				<td><input name="name" type="text" value="<%=bi.getname()%>"></td>
			</tr>
			<tr>
				<th>性别：</th>
				<td><input name="gender" type="text" value="<%=bi.getgender()%>"></td>
			</tr>
			<tr>
				<th >日期：</th>
				<td><input name="birthday" type="text" value="<%=bi.getbirthday()%>"></td>
			</tr>
			<tr>
				<th >地址：</th>
				<td ><input name="address" type="text" value="<%=bi.getaddress()%>"></td>
			</tr>
			<tr>
				<th colspan="2"><input type="submit" value="修改"> <input
					type="reset" value="重置"></th>
			</tr>

		</table>
	</form>
</body>
</html>

