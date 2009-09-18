        \context RhythmicStaff = "guitarra" << 
            \set Staff.instrumentName = "Guitarra"
            \set Staff.shortInstrumentName = "G"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 4" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble_8"
                \key a \major
                a 4 a 8 a 4 a 8 a a  |
                e 4 e 8 e 4 e 8 e e  |
                d 4 d 8 d 4 d 8 d d  |
%% 5
                e 4 e 8 e 4 e 8 e e  |
                d 4 d 8 d 4 d 8 d d  |
                e 4 e 8 e 4 e 8 e e  |
                f 8. f 16 f 8 f 8. f 8 f 16 f 8 f  |
                g 8. g 16 g 8 g 8. g 8 g 16 g 8 g  |
%% 10
                a 8. a 16 a 8 a 8. a 8 a 16 a 8 a  |
            } % Voice
        >> % Staff
