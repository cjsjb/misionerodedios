        \context Staff = "soprano" \with { \consists Ambitus_engraver } << 
            \set Staff.instrumentName = "Soprano"
            \set Staff.shortInstrumentName = "S"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 8" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
                \key a \major

		% [1] intro
		R1*10  |

		% [2] estrofa 1
		r4 e' 16. e' e' 8 e'  e'  e' 8.  |
		e' 8 e' 16 e' 8 e' fis' 8. gis' 4.  |
		r4  a' 8 a' 16 a' 8. gis' 8 fis' e'   |
		b' 1  |
		r4 r8 d' d' d' e' fis'  |
		gis' 8 gis'  gis'  fis' 4 e' e' 8  |
		a' 8 a' a' a' gis' a' gis' fis' ~ |
		fis' 1  |

		% [3] estrofa 2
		r4 e' 16. e' e' 8 e' e' 4 e' 16  |
		e' 8 e' 16 e' 8 e' 8. fis' 8 ( gis' 4. ) |
		r8 r16 cis'  a' 8 a' 16  a' 8 gis' fis' e' 8.  |
		b' 1  |
		r8 d' d' d' d' d' e' fis'  |
		e' 8 b 4 cis' d' gis 8  |
		e' 4 e' 8 e' 4 cis' 8 e' fis' ~  |
		fis' 1  |

		% [4] puente 1
		r8 a' a' a' a' a' a' gis' ~  |
		gis' 8 gis' 2 r8 e' a' ~  |
		a' 4 a' 8 gis' 4 gis' fis' 8 ~  |
		fis' 1  |
		r8 a' a' a' a' a' a' gis' ~  |
		gis' 8 gis' 4 r8 gis' fis' e' e' ~  |
		e' 1  |
		R1  |

		% [5] coro 1
		R1  |
		r8 r16 a' a' 16. a' a' 8 a' b' 8. cis'' 8  |
		R1  |
		r8 r16 fis' fis' 16. fis' fis' 8 e' fis' ( a' 8.  |
		a' 2 gis' ) |
		r8 a' a' a' 4 ( gis' 8 fis' e' ) |
		r8 a' a' a' gis' a' gis' a' ~  |

		% [6] interludio
		a' 1  |
		R1*7  |

		% [7] estrofa 3
		r4 e' 16. e' e' 8 e' e' e' 8.  |
		e' 8 e' 16 e' 8 e' fis' 8. gis' 4.  |
		r4 a' 8 a' 16 a' 8 gis' fis' e' 8.  |
		b' 1  |
		r8 d' d' d' d' d' e' fis'  |
		gis' 8 gis' gis' fis' 4 e' e' 8  |
		a' 8 a' a' a' gis' a' gis' fis' ~  |
		fis' 1  |

		% [8] estrofa 4
		r4 e' 16. e' e' 8 e' e' e' 8.  |
		e' 8 e' 16 e' 8 e' fis' 8. gis' 4.  |
		r4 a' 8 a' 16 a' 8. gis' 8 fis' e'  |
		b' 1  |
		r8 d' d' d' d' d' e' fis'  |
		e' 8 b b cis' 4 d' r8  |
		e' 8 e' e' e' e' cis' e' fis' ~  |
		fis' 1  |

		% [9] puente 2
		r8 a' a' a' a' a' a' gis' ~  |
		gis' 8 gis' 2 e' 8 e' a' ~  |
		a' 4 a' 8 gis' 4 gis' fis' 8 ~  |
		fis' 1  |
		r4 a' 8 a' 4 a' 8 a' gis' ~  |
		gis' 8 gis' 4 r8 gis' fis' e' e' ~  |
		e' 1  |
		R1  |

		% [10] coro 2
		R1
		r8 r16 a' a' 16. a' a' 8 a' b' 8. cis'' 8  |
		R1  |
		r8 r16 fis' fis' 16. fis' fis' 8 e' fis' ( a' 8.  |
		a' 2 gis' ) |
		r8 a' a' a' 4 ( gis' 8 fis' e' ) |
		r8 a' a' a' gis' a' gis' a' ~  |
		a' 1  |
		R1  |

		% [11] coro 3
		R1  |
		r8 r16 a' a' 16. a' a' 8 a' b' 8. cis'' 8  |
		R1  |
		r8 r16 fis' fis' 16. fis' fis' 8 e' fis' ( a' 8.  |
		a' 2 gis' ) |
		r8 a' a' a' 4 ( gis' 8 fis' e' ) |
		R1

		% [12] finale
		r8 a' a' a' gis' a' gis' a' ~  |
		a' 1  |
		r8 a' a' a' gis' a' gis' a' ~  |
		a' 1  |
		r8 a' a' a' gis' a' gis' a' ~  |
		a' 2. a' 8 a' ( ~  |
		a' 1  |
		f' 1  |
		e' 1 )
		\bar "|."
            } % Voice

	\lyricsto "voice 8" \new Lyrics \lyricmode {
		% [1] intro

		% [2] estrofa 1
		"Por" "un" "tiem" -- "po" "fuis" -- "te a" -- "zo" -- "te" "de" "cris" -- "tia" -- "nos;"
		"quién" "po" -- "drí" -- "a i" -- "ma" -- "gi" -- "nar"
		"que" "mien" -- "tras" "per" -- "se" -- "guí" -- "as" "her" -- "ma" -- "nos"
		"tu" "vi" -- "da en" "un" "ins" -- "tan" -- "te" "cam" -- "bió."

		% [3] estrofa 2
		"E" -- "se en" -- "cuen" -- "tro" "que" "tu" -- "vis" -- "te" "con" "Je" "sús" __
		"a" -- "brió" "tus" "o" -- "jos" "a" "la" "luz."
		"Fuis" -- "te e" -- "le" -- "gi" -- "do" "pa" -- "ra" "ser" "por" "siem" -- "pre"
		"un" "mi" -- "sio" -- "ne" -- "ro" "de" "Dios."

		% [4] puente 1
		"Y" "pre" -- "di" -- "car" "por" "el" "mun" -- "do"
		"el" "nom" -- "bre" "de" "Je" -- "sús"
		"pa" -- "ra" "que" "to" -- "dos" "co" -- "noz" -- "can"
		"su" "sal" -- "va" -- "ción."

		% [5] coro 1
		"a" "to" -- "das" "las" "na" -- "cio" -- "nes"
		"la" "luz" "del" "sal" -- "va" -- "dor" __
		"...co" -- "mo" "tú," __
		"un" "mi" -- "sio" -- "ne" -- "ro" "de" "Dios."

		% [6] interludio

		% [7] estrofa 3
		"En" "tus" "car" -- "tas" "nos" "de" -- "jas" -- "te" "la en" -- "se" -- "ñan" -- "za"
		"de" "vi" -- "vir" "con" "hu" -- "mil" -- "dad,"
		"de" "ser" "va" -- "lien" -- "tes" "en" "las" "ad" -- "ver" -- "si" -- "da" -- "des,"
		"y en" "Cris" -- "to" "nues" -- "tra" "fe" "re" -- "no" -- "var." __

		% [8] estrofa 4
		"Tu" "mi" -- "sión" "fue u" -- "nir" "a" "to" -- "dos" "co" -- "mo her" -- "ma" -- "nos"
		"en" "un" "gran" "la" -- "zo" "de a" -- "mor"
		"y" "con" "la" "fuer" -- "za" "del" "Es" -- "pí" -- "ri" -- "tu" "San" -- "to"
		"ser" "un" "mi" -- "sio" -- "ne" -- "ro" "de" "Dios." __

		% [9] puente 2
		"Y" "cuan" -- "do" "lle" -- "gue" "la" "du" -- "da,"
		"el" "te" -- "mor" "o" "la a" -- "flic" -- "ción,"
		"a" -- "mi" -- "go" "San" "Pa" -- "blo,"
		"rue" -- "ga" "por" "mí."

		% [10] coro 2
		"a" "to" -- "das" "las" "na" -- "cio" -- "nes"
		"la" "luz" "del" "sal" -- "va" -- "dor" __
		"...co" -- "mo" "tú," __
		"un" "mi" -- "sio" -- "ne" -- "ro" "de" "Dios."

		% [11] coro 3
		"a" "to" -- "das" "las" "na" -- "cio" -- "nes"
		"la" "luz" "del" "sal" -- "va" -- "dor" __
		"...co" -- "mo" "tú," __

		% [12] finale
		"un" "mi" -- "sio" -- "ne" -- "ro" -- "de" "Dios,"
		"un" "mi" -- "sio" -- "ne" -- "ro" -- "de" "Dios,"
		"un" "mi" -- "sio" -- "ne" -- "ro" -- "de" "Dios,"
		"...de" "Dios" __
	} % Lyrics

        >> % Staff
