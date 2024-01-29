import java.io.File;
class code1{
public static void main(String ... s)throws Exception{
// here we using file class object to make operation in files
File f1 =new File("C:/Users/ram/Desktop/Java/file handle/,file1.txt");
f1.createNewFile();
System.out.println(" file exists" +f1.exists());//give true or false if file is present or not
System.out.println(" file name" +f1.getName());
System.out.println("length of  file " +f1.length());
}

}