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
                R1*89  |
                r8 a' a' a' gis' a' gis' a' ~  |
                a' 1  |
                r8 a' a' a' gis' a' gis' a' ~  |
                a' 1  |
%% 95
                r8 a' a' a' gis' a' gis' a' ~  |
                a' 2. r4  |
                R1*4  |
                \bar "|."
            } % Voice

	\lyricsto "voice 8" \new Lyrics \lyricmode {
		% [12] finale
		"Un" "mi" "sio" "ne" "ro" "de" "Dios,"
		"un" "mi" "sio" "ne" "ro" "de" "Dios,"
		"un" "mi" "sio" "ne" "ro" "de" "Dios."
	} % Lyrics

        >> % Staff
