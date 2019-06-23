<!--index.html 李杨悦-->
<%@ page pageEncoding="utf-8" import="java.util.ArrayList,Student.bean.student"%>
<html>
<head>
<title>图书管理系统</title>
<link rel="stylesheet" type="text/css" href="css/style.css">
</head>
<body>
	<h1>图书管理系统</h1>
	<a href="add.html">增加图书信息</a>
	<p />
	<table style="width: 50%">
		<tr>
			<th>姓名</th>
			<th>性别</th>
			<th>出生日期</th>
			<th>地址</th>
			<th>管理</th>
		</tr>
		<%
			@SuppressWarnings("unchecked")
			ArrayList<student> list = (ArrayList<student>) request.getAttribute("list"); 
			for (student bi : list) {
				String sno = bi.getsno();
		%>
		<tr>
			<td><%=bi.getname()%></td>
			<td><%=bi.getgender()%></td>
			<td><%=bi.getbirthday()%></td>
			<td><%=bi.getaddress()%></td>
			<td><a href="edit.do?sno=<%=sno%>">修改</a> <a
				href="delete.do?sno=<%=sno%>">删除</a></td>
		</tr>
		<%
			}
		%>
	</table>
	<br />
	<hr />
	<div style="text-align: center; width: 100%; font-size: 12px; color: #333;">
		&copy;版权所有：石家庄铁道大学信息科学与技术学院&nbsp;&nbsp;<a href="Lab04-1.png"
			target="_blank">网站地图</a>
	</div>
</body>
</html>
