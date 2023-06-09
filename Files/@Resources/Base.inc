[Variables]
@Include=#@#Variables.inc
@Include2=#CurrentPath#ConfigVariables.inc

True=1
False=0

IconStyleMono=0
IconStyleColor=1

[Rainmeter]
Update=1000
AccurateText=1
DynamicWindowSize=1

BackgroundMode=2
SolidColor=0, 0, 0, 1

ContextTitle=Global settings...
ContextAction=["#ConfigEditor#" "#@#Variables.inc"]
ContextTitle2=Config settings...
ContextAction2=["#ConfigEditor#" "#CurrentPath#ConfigVariables.inc"]

OnRefreshAction=[!UpdateMeter *] [!UpdateMeter *] [!Redraw]

; ================================================

[IncludeWeatherParser]
@Include=#@#WeatherParser.inc
@Include2=#@#WeatherParserDaily.inc
