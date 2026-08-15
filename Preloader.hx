package ;
 
import flixel.system.FlxBasePreloader;
import openfl.display.Sprite;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.BlendMode;
import flash.display.Sprite;
import flash.text.TextField;
import flash.text.TextFormat;
import flash.Lib;
import flixel.FlxG;
 
@:bitmap("art/preloaderArt.png") class LogoImage extends BitmapData { }
 
class Preloader extends FlxBasePreloader
{
    public function new(MinDisplayTime:Float=3, ?AllowedURLs:Array<String>) 
    {
        super(MinDisplayTime, AllowedURLs);
    }
     
    var logo:Sprite;
    var loadingBar:Sprite;
    var loadingText:TextField;
     
    override function create():Void 
    {
        this._width = Lib.current.stage.stageWidth;
        this._height = Lib.current.stage.stageHeight;
         
        var ratio:Float = this._width / 2560; //This allows us to scale assets depending on the size of the screen.
         
        logo = new Sprite();
        logo.addChild(new Bitmap(new LogoImage(0,0))); //Sets the graphic of the sprite to a Bitmap object, which uses our embedded BitmapData class.
        logo.scaleX = logo.scaleY = ratio;
        logo.x = ((this._width) / 2) - ((logo.width) / 2);
        logo.y = (this._height / 2) - ((logo.height) / 2);
        addChild(logo); //Adds the graphic to the NMEPreloader's buffer.
        
        // Create loading bar background
        loadingBar = new Sprite();
        loadingBar.graphics.beginFill(0x333333);
        loadingBar.graphics.drawRect(0, 0, 400, 20);
        loadingBar.graphics.endFill();
        loadingBar.x = (this._width / 2) - 200;
        loadingBar.y = (this._height / 2) + 150;
        addChild(loadingBar);
        
        // Create loading bar fill
        var barFill:Sprite = new Sprite();
        barFill.graphics.beginFill(0x00FF00);
        barFill.graphics.drawRect(0, 0, 1, 20);
        barFill.graphics.endFill();
        barFill.name = "barFill";
        loadingBar.addChild(barFill);
        
        // Create loading text
        loadingText = new TextField();
        loadingText.text = "Loading: 0%";
        loadingText.textColor = 0xFFFFFF;
        loadingText.x = (this._width / 2) - 100;
        loadingText.y = (this._height / 2) + 180;
        loadingText.width = 200;
        var format = new TextFormat();
        format.size = 16;
        format.align = "center";
        loadingText.defaultTextFormat = format;
        addChild(loadingText);
         
        super.create();
    }
     
    override function update(Percent:Float):Void 
    {
        if(Percent < 69)
        {
            logo.scaleX += Percent / 1920;
            logo.scaleY += Percent / 1920;
            logo.x -= Percent * 0.6;
            logo.y -= Percent / 2;
        }else{
            logo.scaleX = this._width / 1280;
            logo.scaleY = this._width / 1280;
            logo.x = ((this._width) / 2) - ((logo.width) / 2);
            logo.y = (this._height / 2) - ((logo.height) / 2);
        }
        
        // Update loading bar
        var barFill = loadingBar.getChildByName("barFill");
        if (barFill != null)
        {
            barFill.width = (Percent / 100) * 400;
        }
        
        // Update loading text
        loadingText.text = "Loading: " + Std.int(Percent) + "%";
         
        super.update(Percent);
    }
}
