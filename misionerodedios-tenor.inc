        \context Staff = "Tenor" \with { \consists Ambitus_engraver } << 
            \set Staff.instrumentName = "Tenor"
            \set Staff.shortInstrumentName = "T"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 10" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble_8"
                \key a \major
                R1*18  |
%% 20
		% [3] estrofa 2
                r4 a e a  |
                gis 2 fis 4 e  |
                \breathe r4 a e a  |
                e 1  |
                \breathe r4 d e fis  |
                gis 4. a 4 b \breathe r8  |
                cis' 4 cis' 8 b 4 a 8 gis a ~  |
                a 1  |

		% [4] puente 1
                R1*8  |

		% [5] coro 1
                r8 a a b 4 a 8 gis a ~  |  a 8 r r4 r2  |
                r8 a a b 4 a 8 gis a ~  |  a 8 (b cis' b 2 ) r8  |
                r8 a a a b cis' d' d' ~  |
		d' 8 cis' b cis' 4 ( b 8 a 4 )  |
                r8 a a a b cis' b a ~  |

		% [6] interludio
                a 2 r  |

                R1*15  |

		% [8] estrofa 4
                r4 a e a  |
                gis 2 fis 4 e  |
                r4 a e a  |
                e 1  |
                r4 d e fis  |
                gis 4. a 4 b r8  |
                cis' 8 cis' cis' cis' b a gis a ~  |
                a 1  |

		% [9] puente 2
                R1*8  |

		% [10] coro 2
                r8 a a b 4 a 8 gis a ~  |  a 8 r r4 r2  |
                r8 a a b 4 a 8 gis a ~  |  a 8 (b cis' b 2 ) r8  |
                r8 a a a b cis' d' d' ~  |
		d' 8 cis' b cis' 4 ( b 8 a 4 )  |
                r8 a a a b cis' b a ~  |
                a 2 r  |
                r 1 | 

		% [11] coro 3
                r8 a a b 4 a 8 gis a ~  |  a 8 r r4 r2  |
                r8 a a b 4 a 8 gis a ~  |  a 8 (b cis' b 2 ) r8  |
                r8 a a a b cis' d' d' ~  |
		d' 8 cis' b cis' 4 ( b 8 a 4 )  |
                r8 a a a b cis' b a ~  |

		% [12] finale
                a 2.. r 8 |
                r8 a a a b cis' b a ~  |
                a 2..  r 8  |
                r8 a a a b cis' b a ~  |
                a 2..  r 8  |
                r8 a a a b cis' b a ~  |
                a 1 ~  |
                a 1 ~  |
                a 1  |
                R1  |
                \bar "|."
            } % Voice


            \lyricsto "voice 10" \new Lyrics \lyricmode {
		% [3] estrofa 2
		"Ah" "ah" "ah"
		"ah" "ah" "ah"
		"ah" "ah" "ah" "-uz,"
		"ah" "ah" "ah" "ah" "ah" "ah"
		"mi" "sio" "ne" "ro" "de" "Dios."

		% [5] coro 1
		"Des" "ti" "na" "do_a" "lle" "var"
		"la" "pa" "la" "bra" "de" "Dios,"
		"San" "Pa" "blo,_en" "sé" "ña" "me_a" "ser" "co" "mo" "tú"
		"un" "mi" "sio" "ne" "ro" "de" "Dios."

		% [8] estrofa 4
		"Ah" "ah" "ah"
		"ah" "ah" "ah"
		"ah" "ah" "ah" "-or,"
		"ah" "ah" "ah" "ah" "ah" "ah"
		"ser" "un" "mi" "sio" "ne" "ro" "de" "Dios."

		% [10] coro 2
		"Des" "ti" "na" "do_a" "lle" "var"
		"la" "pa" "la" "bra" "de" "Dios,"
		"San" "Pa" "blo,_en" "sé" "ña" "me_a" "ser" "co" "mo" "tú"
		"un" "mi" "sio" "ne" "ro" "de" "Dios."

		% [11] coro 3
		"Des" "ti" "na" "do_a" "lle" "var"
		"la" "pa" "la" "bra" "de" "Dios,"
		"San" "Pa" "blo,_en" "sé" "ña" "me_a" "ser" "co" "mo" "tú"
		"un" "mi" "sio" "ne" "ro" "de" "Dios."

		% [12] finale
		"Un" "mi" "sio" "ne" "ro" "de" "Dios,"
		"un" "mi" "sio" "ne" "ro" "de" "Dios,"
		"un" "mi" "sio" "ne" "ro" "de" "Dios." 
             } % Lyrics

        >> % Staff
