/*
    التكليف 03

    لديك بعض أسماء المتغيرات مكتوبة في التعليق
    كل ما عليك أن تقوم بكتابة Valid لو كان إسم المتغير صالح بجانب إسم المتغير و Not Valid لو كان غير صالح
    إذا كان المتغير صالح قم بكتابة Good Practice لو كان إسم المتغير يتبع ال Best Practices و Bad Practice لو كان لا يتبع أحسن الممارسات
    لديك مثال في بداية التعليق لتوضيح الفكرة


  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ ??? ] => Reason ?
  __name      [ ??? ] => Reason ?
  name@name   [ ??? ] => Reason ?
  name10name  [ ??? ] => Reason ?
  name!name   [ ??? ] => Reason ?
  first_NAME  [ ??? ] => Reason ?
  first_name  [ ??? ] => Reason ?
  firstName   [ ??? ] => Reason ?
  first name  [ ??? ] => Reason ?
  fn          [ ??? ] => Reason ?
  public      [ ??? ] => Reason ?
  Public      [ ??? ] => Reason ?

*/
// ========================
// solution 
/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Valid ] => Letters 
  __name      [ Valid ] => Letters Or Underscore 
  name@name   [ Not Valid ] => Special Characters 
  name10name  [ Valid| Bad Practice   ] =>  Nums Or Letters  
  name!name   [ Not Valid ] => Special Characters 
  first_NAME  [ Valid | Bad Practice ] => Letters Or Underscore  
  first_name  [ Valid | Good Practice] => Letters Or Underscore 
  firstName   [ Valid | Good Practice ] => Letters 
  first name  [ Not Valid ] => White Space 
  fn          [ Valid ] => Letters 
  public      [ Not Valid ] =>  Reserved Keywords 
  Public      [ Valid ] => Letters  and NOT Reserved Keywords because Case Sensitive  
*/

