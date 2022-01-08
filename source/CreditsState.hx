package;

#if desktop
import Discord.DiscordClient;
#end
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.tweens.FlxTween;
import lime.utils.Assets;

using StringTools;

class CreditsState extends MusicBeatState
{
	var curSelected:Int = 1;

	private var grpOptions:FlxTypedGroup<Alphabet>;
	private var iconArray:Array<AttachedSprite> = [];

	private static var creditsStuff:Array<Dynamic> = [ //Name - Icon name - Description - Link - BG Color
		['Team 10 of B verse'],
        ['Biro',        'biro',        'Main Programmer/Animator/pixel artist/Charter/storywritter',                    'https://www.youtube.com/channel/UCkDhHejKkl40_S1Mb5RzMBg',    0xFFFFDD33],
        ['Rainbow',        'rainbow',        'Main concept artist/bg artist/Icon artist (Man I couldnt done it without you)',                    'https://www.youtube.com/channel/UCA93rLHSCGZoradNb0zk1Yg',    0xFFD00027],
		['Shokora',        'shokora',        'Windows compiler + Coding help (thanks man with for helping me so much with coding)',                    'https://www.youtube.com/channel/UCtt5i053XlP0Ynu_b5dFbeA/videos',    0xFF635B78],
		['Canadiangoose',        'canadiangoose',        'Coding help (HOLY FREAK THANK YOU)',                    'https://twitter.com/PissKitty2006',    0xFFFFFFFF],
		['Cary',        'cary',        'Coding help (Thanks bro, btw I love ur art style it Inspired me)',                    'https://twitter.com/PissKitty2006',    0xFFFFFFFF],
		['Kiro',        'kiro',        'THE MUSIC MANNNNN (KIRO YOU ALWAYS BEEN THERE FOR ME BROTHER, I COULDNT DONE IT WITHOUT YOU)',                    'https://www.youtube.com/channel/UCYWbre_6s1DbTpHTRK-GKKQ',    0xFF9933FF],
		['Milkman',        'milkman',        'Story writter (MANN thank you for making the story I imagine come to life, ur the best homie)',                    'https://www.youtube.com/channel/UCXzfc_osmtS0sEw7Lq7ca4g',    0xFFFFF8F9],
        ['Saturn',        'saturn',        'Music stuff (everyone check out his music)',                    'https://www.youtube.com/channel/UCk7Q2kTP7-2J2WX0jLkT5tA',    0xFF5B382A],
		['clouditio',        'clouditio',        'The guy who made the monster beat (Keep going with music man I believe in you)',                    'https://www.youtube.com/channel/UCaZmOBbtNhdmcuj2F0glAoA',    0xFFC7C0F7],
		['Spacemen',        'knight',        'the music guy ALSO GO CHECK OUT MASHUP (Mashup is the big brother)',                    'https://www.youtube.com/watch?v=cRZFp8Si6po&t=1s',    0xFFE9D75A],
		['Niko',        'niko',        'MUSIC GUYYYYYYYY (dude this guys music slap harder than my meat)',                    'https://www.youtube.com/channel/UCFV3dbhTKn4CyRqmFL9Dglw',    0xFF6A6A6A],
        ['Bagel',        'bagel',        'bg artist/cool art crap (Join if you like bussy but fr thank you for being there for me and I mean it)',                    'https://www.youtube.com/c/BagelByte',    0xFFB06E54],
		['Dami',        'dami',        'Concept artist (Dami if youre seeing this man your so cool and keep going with art man!)',                    'https://twitter.com/DamiNation2020',    0xFF00FFFB],
		['Nitro',        'nitro',        'did a lil bit of Charting (your just like my dad)',                    'https://twitter.com/Nitro21X',    0xFF96BA31],
		['Painty',        'painty',        'Concept artist/artist (shes really nice go check her out)',                    'https://www.instagram.com/candycloud2/',    0xFFF8BBF9],
		['Nick',        'nick',        'Ay man LISTEN LISTEN hes the pixel guy (AY MAN LISTEN HOLD UP LISTEN AHHH-)',                    'https://www.youtube.com/channel/UCIuV47XDp8-zH-qfQ4slwzg',    0xFFE500E7],
		[''],
		['Psych Engine Team'],
		['Shadow Mario',		'shadowmario',		'Main Programmer of Psych Engine',					'https://twitter.com/Shadow_Mario_',	0xFFFFDD33],
		['RiverOaken',			'riveroaken',		'Main Artist/Animator of Psych Engine',				'https://twitter.com/river_oaken',		0xFFC30085],
		[''],
		['Engine Contributors'],
		['shubs',				'shubs',			'New Input System Programmer',						'https://twitter.com/yoshubs',			0xFF4494E6],
		['PolybiusProxy',		'polybiusproxy',	'.MP4 Video Loader Extension',						'https://twitter.com/polybiusproxy',	0xFFE01F32],
		['gedehari',			'gedehari',			'Chart Editor\'s Sound Waveform base',				'https://twitter.com/gedehari',			0xFFFF9300],
		['Keoiki',				'keoiki',			'Note Splash Animations',							'https://twitter.com/Keoiki_',			0xFFFFFFFF],
		['SandPlanet',			'sandplanet',		'Mascot\'s Owner\nMain Supporter of the Engine',		'https://twitter.com/SandPlanetNG',		0xFFD10616],
		['bubba',				'bubba',		'Guest Composer for "Hot Dilf"',	'https://www.youtube.com/channel/UCxQTnLmv0OAS63yzk9pVfaw',	0xFF61536A],
		[''],
		["Funkin' Crew"],
		['ninjamuffin99',		'ninjamuffin99',	"Programmer of Friday Night Funkin'",				'https://twitter.com/ninja_muffin99',	0xFFF73838],
		['PhantomArcade',		'phantomarcade',	"Animator of Friday Night Funkin'",					'https://twitter.com/PhantomArcade3K',	0xFFFFBB1B],
		['evilsk8r',			'evilsk8r',			"Artist of Friday Night Funkin'",					'https://twitter.com/evilsk8r',			0xFF53E52C],
		['kawaisprite',			'kawaisprite',		"Composer of Friday Night Funkin'",					'https://twitter.com/kawaisprite',		0xFF6475F3]
	];

	var bg:FlxSprite;
	var descText:FlxText;
	var intendedColor:Int;
	var colorTween:FlxTween;

	override function create()
	{
		#if desktop
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In the Menus", null);
		#end

		bg = new FlxSprite().loadGraphic(Paths.image('menuDesat'));
		add(bg);

		grpOptions = new FlxTypedGroup<Alphabet>();
		add(grpOptions);

		for (i in 0...creditsStuff.length)
		{
			var isSelectable:Bool = !unselectableCheck(i);
			var optionText:Alphabet = new Alphabet(0, 70 * i, creditsStuff[i][0], !isSelectable, false);
			optionText.isMenuItem = true;
			optionText.screenCenter(X);
			if(isSelectable) {
				optionText.x -= 70;
			}
			optionText.forceX = optionText.x;
			//optionText.yMult = 90;
			optionText.targetY = i;
			grpOptions.add(optionText);

			if(isSelectable) {
				var icon:AttachedSprite = new AttachedSprite('credits/' + creditsStuff[i][1]);
				icon.xAdd = optionText.width + 10;
				icon.sprTracker = optionText;
	
				// using a FlxGroup is too much fuss!
				iconArray.push(icon);
				add(icon);
			}
		}

		descText = new FlxText(50, 600, 1180, "", 32);
		descText.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		descText.scrollFactor.set();
		descText.borderSize = 2.4;
		add(descText);

		bg.color = creditsStuff[curSelected][4];
		intendedColor = bg.color;
		changeSelection();
		super.create();
	}

	override function update(elapsed:Float)
	{
		if (FlxG.sound.music.volume < 0.7)
		{
			FlxG.sound.music.volume += 0.5 * FlxG.elapsed;
		}

		var upP = controls.UI_UP_P;
		var downP = controls.UI_DOWN_P;

		if (upP)
		{
			changeSelection(-1);
		}
		if (downP)
		{
			changeSelection(1);
		}

		if (controls.BACK)
		{
			if(colorTween != null) {
				colorTween.cancel();
			}
			FlxG.sound.play(Paths.sound('cancelMenu'));
			MusicBeatState.switchState(new MainMenuState());
		}
		if(controls.ACCEPT) {
			CoolUtil.browserLoad(creditsStuff[curSelected][3]);
		}
		super.update(elapsed);
	}

	function changeSelection(change:Int = 0)
	{
		FlxG.sound.play(Paths.sound('scrollMenu'), 0.4);
		do {
			curSelected += change;
			if (curSelected < 0)
				curSelected = creditsStuff.length - 1;
			if (curSelected >= creditsStuff.length)
				curSelected = 0;
		} while(unselectableCheck(curSelected));

		var newColor:Int = creditsStuff[curSelected][4];
		if(newColor != intendedColor) {
			if(colorTween != null) {
				colorTween.cancel();
			}
			intendedColor = newColor;
			colorTween = FlxTween.color(bg, 1, bg.color, intendedColor, {
				onComplete: function(twn:FlxTween) {
					colorTween = null;
				}
			});
		}

		var bullShit:Int = 0;

		for (item in grpOptions.members)
		{
			item.targetY = bullShit - curSelected;
			bullShit++;

			if(!unselectableCheck(bullShit-1)) {
				item.alpha = 0.6;
				if (item.targetY == 0) {
					item.alpha = 1;
				}
			}
		}
		descText.text = creditsStuff[curSelected][2];
	}

	private function unselectableCheck(num:Int):Bool {
		return creditsStuff[num].length <= 1;
	}
}
