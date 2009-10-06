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

                %\clef "tenor"
                \clef "treble_8"
                \key a \major
                R1*10  |

		% [2] estrofa 1
		r4 e 16. e e 8 e  e  e 8.  |
		e 8 e 16 e 8 e fis 8. gis 4.  |
		r4  a 8 a 16 a 8. gis 8 fis e   |
		e 1  |
		r4 r8 d d d e fis  |
		gis 8 gis  gis  a 4 b e 8  |
		cis' 8 cis' cis' cis' b a gis a ~  |
		a 1  |

		% [3] estrofa 2
		r4 a e a  |
		gis 2 fis 4 e  |
		r4 a e a  |
		e 1  |
		r4 d e fis  |
		gis 4. a 4 b e 8  |
		cis' 4 cis' 8 b 4 a 8 gis a ~  |
		a 1  |

		% [4] puente 1
		r8 a a a a b a b ~  |
		b 8 e 2 r8 e cis' ~  |
		cis' 4 cis' 8 b 4 b a 8 ~  |
		a 1  |
		r8 a a a a gis a b ~  |
		b 8 b 4 r8 b a gis a ~  |
		a 1  |
		R1  |

		% [5] coro 1
		r8 a a b 4 a 8 gis a ~  |  a 8 r r4 r2  |
		r8 a a b 4 a 8 gis a ~  |  a 8 (b cis' b ~ b 2 )  |
		r8 a a a b cis' d' d' ~  |
		d' 8 cis' b cis' 4 ( b 8 a a )  |
		r8 a a a b cis' b a ~  |

		% [6] interludio
		a 1  |  R1*7  |

		% [7] estrofa 3
		r4 e 16. e e 8 e  e  e 8.  |
		e 8 e 16 e 8 e fis 8. gis 4.  |
		r4 a 8 a 16 a 8 gis fis e 8.  |
		e 1  |
		r8 d d d d d e fis  |
		gis 8 gis gis a 4 b e 8  |
		cis' 8 cis' cis' cis' b a gis a ~  |
		a 1  |

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
		r8 a a a a b a b ~  |
		b 8 e 2 e 8 e cis' ~  |
		cis' 4 cis' 8 b 4 b a 8 ~  |
		a 1  |
		r4 a 8  a 4  gis 8 a b ~  |
		b 8 b r4 b 8 a gis a ~  |
		a 1  |
		R1  |

		% [10] coro 2
		r8 a a b 4 a 8 gis a ~  |  a 8 r r4 r2  |
		r8 a a b 4 a 8 gis a ~  |  a 8 (b cis' b ~ b 2 )  |
		r8 a a a b cis' d' d' ~  |
		d' 8 cis' b cis' 4 ( b 8 a a )  |
		r8 a a a b cis' b a ~  |
		a 1  |
		R1  |

		% [11] coro 3
		r8 a a b 4 a 8 gis a ~  |  a 8 r r4 r2  |
		r8 a a b 4 a 8 gis a ~  |  a 8 (b cis' b ~ b 2 )  |
		r8 a a a b cis' d' d' ~  |
		d' 8 cis' b cis' 4 ( b 8 a a )  |
		r8 a a a b cis' b a ~  |

		% [12] finale
		a 1  |
		r8 a a a b cis' b a ~  |
		a 1  |
		r8 a a a b cis' b a ~  |
		a 1  |
		r8 a a a b cis' b a ~  |
		a 1 ~  |
		a 1 ~  |
		a 1
		\bar "|."
            } % Voice


            \lyricsto "voice 10" \new Lyrics \lyricmode {
		% [1] intro

		% [2] estrofa 1
		"Por" "un" "tiem" -- "po" "fuis" -- "te a" -- "zo" -- "te" "de" "cris" -- "tia" -- "nos;"
		"quién" "po" -- "drí" -- "a i" -- "ma" -- "gi" -- "nar"
		"que" "mien" -- "tras" "per" -- "se" -- "guí" -- "as" "her" -- "ma" -- "nos"
		"tu" "vi" -- "da en" "un" "ins" -- "tan" -- "te" "cam" -- "bió."

		% [3] estrofa 2
		"Ah" "ah" "ah"
		"ah" "ah" "ah"
		"ah" "ah" "ah" "uh,"
		"ah" "ah" "ah" "ah" "ah" "ah" "un"
		"mi" -- "sio" -- "ne" -- "ro" "de" "Dios."

		% [4] puente 1
		"Y" "pre" -- "di" -- "car" "por" "el" "mun" -- "do"
		"el" "nom" -- "bre" "de" "Je" -- "sús"
		"pa" -- "ra" "que" "to" -- "dos" "co" -- "noz" -- "can"
		"su" "sal" -- "va" -- "ción."

		% [5] coro 1
		"Des" -- "ti" -- "na" -- "do a" "lle" -- "var"
		"la" "pa" -- "la" -- "bra" "de" "Dios," __
		"San" "Pa" -- "blo, en" -- "sé" -- "ña" -- "me a" "ser" "co" -- "mo" "tú," __
		"un" "mi" -- "sio" -- "ne" -- "ro" "de" "Dios."

		% [6] interludio

		% [7] estrofa 3
		"En" "tus" "car" -- "tas" "nos" "de" -- "jas" -- "te" "la en" -- "se" -- "ñan" -- "za"
		"de" "vi" -- "vir" "con" "hu" -- "mil" -- "dad,"
		"de" "ser" "va" -- "lien" -- "tes" "en" "las" "ad" -- "ver" -- "si" -- "da" -- "des,"
		"y en" "Cris" -- "to" "nues" -- "tra" "fe" "re" -- "no" -- "var."

		% [8] estrofa 4
		"Ah" "ah" "ah"
		"ah" "ah" "ah"
		"ah" "ah" "ah" "oh"
		"ah" "ah" "ah" "ah" "ah" "ah"
		"ser" "un" "mi" -- "sio" -- "ne" -- "ro" "de" "Dios."

		% [9] puente 2
		"Y" "cuan" -- "do" "lle" -- "gue" "la" "du" -- "da,"
		"el" "te" -- "mor" "o" "la a" -- "flic" -- "ción,"
		"a" -- "mi" -- "go" "San" "Pa" -- "blo,"
		"rue" -- "ga" "por" "mí."

		% [10] coro 2
		"Des" -- "ti" -- "na" -- "do a" "lle" -- "var"
		"la" "pa" -- "la" -- "bra" "de" "Dios," __
		"San" "Pa" -- "blo, en" -- "sé" -- "ña" -- "me a" "ser" "co" -- "mo" "tú," __
		"un" "mi" -- "sio" -- "ne" -- "ro" "de" "Dios."

		% [11] coro 3
		"Des" -- "ti" -- "na" -- "do a" "lle" -- "var"
		"la" "pa" -- "la" -- "bra" "de" "Dios," __
		"San" "Pa" -- "blo, en" -- "sé" -- "ña" -- "me a" "ser" "co" -- "mo" "tú," __
		"un" "mi" -- "sio" -- "ne" -- "ro" "de" "Dios,"

		% [12] finale
		"un" "mi" -- "sio" -- "ne" -- "ro" "de" "Dios,"
		"un" "mi" -- "sio" -- "ne" -- "ro" "de" "Dios,"
		"un" "mi" -- "sio" -- "ne" -- "ro" "de" "Dios." __
             } % Lyrics

        >> % Staff
