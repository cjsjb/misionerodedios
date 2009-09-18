        \context Staff = "track 4" << 
            \set Staff.instrumentName = "Cello"
            \set Staff.shortInstrumentName = "C"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 4" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                
                \clef "bass"
                \key a \major
		% intro
                r4 a, b, cis  |
                cis 2 b, ~  |
                b, 4 a, b, a,  |
                e, 1  |
                d 1  |
                b, 2 cis 4 d  |
                f 1  |
                g 2 f 4 g  |
                e 1  |
		r 1  |

		% estrofa 1+2
		R1*16

		% puente 1
		R1*6
                \times 2/3 { cis 4 a, cis } \times 2/3 { b, a, gis, }  |
                a, 4 b, cis e  |

		% coro 1
                e 1  |
		R1*6

		% interludio
		\textSpannerUp  
		\override TextSpanner #'edge-text = #'("piano" . "")
                a, 2 \startTextSpan gis,  |  fis, 2 e,  |
                a, 2 gis,  |  fis, 2 e,  |
                a, 2 gis,  |  fis, 2 e,  |
                a, 2 gis,  |  fis, 2 e, \stopTextSpan |

		% estrofa 3+4
		R1*16

		% puente 2
		R1*6
                \times 2/3 { cis 4 a, cis } \times 2/3 { b, a, gis, }  |
                a, 4 b, cis e  |

		% coro 2
                e 1  |
		R1*25

%                R1*9  |
%                \bar "|."
            } % Voice
        >> % Staff
