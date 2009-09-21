        \context Staff = "track 3" << 
            \set Staff.instrumentName = "Violín"
            \set Staff.shortInstrumentName = "V"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 3" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1
                
                \clef "treble"
                \key a \major

		% intro
                r4 a'' e'' a''  |
                gis'' 2 fis'' 4 e'' ~  |
                e'' 4 a'' e'' a''  |
                e'' 4 d'' 8 cis'' d'' cis'' b' 4  |
                a' 4 d'' e'' fis''  |
                gis'' 2 a'' 4 b''  |
                b'' 1 ~  |
                b'' 1  |
                cis''' 1  |
		r 1  |

		% estrofa 1+2
		R1*7
		fis'' 2 ~ fis'' 8 gis'' 8. a''  |
		a'' 1  |
		gis'' 1  |
		fis'' 1  |
		e'' 1  |
		R1*3
		a' 8. b' cis'' 8 d'' 8. e'' fis'' 8  |

		% puente 1
		fis'' 1  |
		R1*5
                \times 2/3 { a'' 4 e'' a'' } \times 2/3 { gis'' fis'' e'' }  |
                fis'' 4 gis'' a'' b''  |

		% coro 1
                a'' 1  |
		R1*6

		% interludio
		\textSpannerUp
		\override TextSpanner #'edge-text = #'("piano" . "")
		a' 4 \startTextSpan b' cis'' d''  |  e'' 2 b'  |
		a' 4 b' cis'' d''  |  e'' 2 b'  |
		e'' 4 d'' cis'' b'  |  a' 2 e''  |
		e'' 4 d'' cis'' b'  |  a' 2 e'' \stopTextSpan |

		% estrofa 3+4
		e'' 1  |
		R1*6
		fis'' 2 ~ fis'' 8 gis'' 8. a''  |
		a'' 1  |
		gis'' 1  |
		fis'' 1  |
		e'' 1  |
		R1*3
		a' 8. b' cis'' 8 d'' 8. e'' fis'' 8  |

		% puente 2
		fis'' 1  |
		R1*5
                \times 2/3 { a'' 4 e'' a'' } \times 2/3 { gis'' fis'' e'' }  |
                fis'' 4 gis'' a'' b''  |

		% coro 2
                a'' 1  |
		R1*25
%                R1*9  |
%                \bar "|."
            } % Voice
        >> % Staff
