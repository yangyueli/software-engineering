<%@ page pageEncoding="utf-8" import="java.util.ArrayList,Student.bean.student"%>
<html>
<head>
<title>ͼ�����ϵͳ</title>
<link rel="stylesheet" type="text/css" href="css/style.css">
</head>
<body>
	<h1>ͼ�����ϵͳ</h1>
	<a href="add.html">����ͼ����Ϣ</a>
	<p />
	<table style="width: 50%">
		<tr>
			<th>����</th>
			<th>�Ա�</th>
			<th>��������</th>
			<th>��ַ</th>
			<th>����</th>
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
			<td><a href="edit.do?sno=<%=sno%>">�޸�</a> <a
				href="delete.do?sno=<%=sno%>">ɾ��</a></td>
		</tr>
		<%
			}
		%>
	</table>
	<br />
	<hr />
	<div style="text-align: center; width: 100%; font-size: 12px; color: #333;">
		&copy;��Ȩ���У�ʯ��ׯ������ѧ��Ϣ��ѧ�뼼��ѧԺ&nbsp;&nbsp;<a href="Lab04-1.png"
			target="_blank">��վ��ͼ</a>
	</div>
</body>
</html>
