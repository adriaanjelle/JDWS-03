[Variables]
Scale=1.00
; A size multiplier for the skin. Please stick to increments of 0.25, so "1.25", "1.5", "1.75" etc.

FixedSkinWidth=False
; This option enables the SkinWidth option below. When set to "False", the width of the skin is dynamic, based on the WeatherAmountOfDays option below.
; You can choose whichever method you prefer.

SkinWidth=480
; The width of the (draggable) skin area in pixels.

WeatherAmountOfDays=7
; The amount of forecast days shown. The minimum is 2, the maxiumum is 15.

; ================================================

WeatherDailyWeekdaySize=12
; The size of the weekday text of the forecast in pixels.
WeatherDailyIconSize=36
; The size of the icons of the forecast in pixels.
WeatherDailyTemperatureSize=10
; The size of the temperature text of the forecast in pixels.

; ================================================

; Uncomment the following options by removing ";" to override the global setting.
; This makes it possible to have skins with different colors and icons in the same JDWS release.

;Font=Roboto
; The font used in the skin.

;Color=255, 255, 255
; The color of the text and the Mono icons.
; Valid values are formatted "RRR, GGG, BBB" with values of 0-255.

;WeatherIconStyle=Color
; The style of the weather icons. Valid values are "Color" and "Mono".
; The Mono icons are embedded in the JDWI.ttf font and the Color icons are found in "@Resources\WeatherIcons".
