import java.util.regex.*;
public class splitingArrays {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		String html = "<div class=\"image\"><img src=\"http://cdn.posh24.se/images/:profile/0fddc23e241e86e1a30c49bb334d76f8a\" alt=\"Taylor Swift\"/></div>";

	    Pattern p = Pattern.compile("img src=\"(.*?)\"");
	    Matcher m = p.matcher(html);

	    while (m.find()) {
	    	System.out.println(m.group(1));
	    }

	    p = Pattern.compile("alt=\"(.*?)\"");
	    m = p.matcher(html);

	    while (m.find()) {
	    	System.out.println(m.group(1));
	    }


	}

}
