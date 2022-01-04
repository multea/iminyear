<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" session="false"%>
<% response.setContentType("text/html; charset=utf-8"); %>

<%@ page import = "java.util.Date" %>
<%@ page import = "java.text.SimpleDateFormat" %>
<%@ page import = "java.util.Calendar" %>

<!DOCTYPE HTML>
<HTML>
<HEAD><TITLE></TITLE>
<META http-equiv="Content-Type" content="text/html; charset=utf-8">

<script type="text/javascript" src="/js/lib/jQuery/jquery-1.8.3.js"></script>
<script language="javascript" type="text/javascript"></script>
<Script Language="JavaScript">
 var date = new Date();

function getFormatDate(date) {
  var year = date.getFullYear();
  var month = (1 + date.getMonth());
  month = month >= 10 ? month : '0' + month;
  var day = date.getDate();
  day = day >= 10 ? day : '0' + day;

  return year + '-' + month + '-' + day;
}

alert(getFormatDate(date));

function getWeek(v_date_str) {
 if(v_date_str){
  date = new Date(v_date_str);
 }
 return Math.ceil(date.getDate() / 7);
}

var week = getWeek(getFormatDate(date));

if(week == 2)
{
 alert(week); 
}


/*
출근 버튼 함수 실행 시

오늘일자 가져와서 오늘이 몇주인지 확인하고
주가 4 째주의 getday 로 5 가 나오면 실행 

*/
</Script>
</HEAD>

<BODY>
</BODY>
</HTML>