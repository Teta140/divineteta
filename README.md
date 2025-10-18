BEGIN

    FOR number ← 1 TO 100 DO
        IF number > 1 THEN
            isPrime ← TRUE

            FOR i ← 2 TO √number DO
                IF number MOD i = 0 THEN
                    isPrime ← FALSE
                    
                END IF
            END FOR

            IF isPrime = TRUE THEN
                PRINT number
            END IF
        END IF
    END FOR

END
