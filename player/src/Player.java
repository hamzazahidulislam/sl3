abstract public class Player {
    protected String[] playlist;
    protected int currentSong;

    public Player(String[] playlist) {
        this.playlist = playlist;
        if (playlist.length > 0) {
            this.currentSong = 0;
        } else {
            throw new Error("playlist must have at least one song");
        }
    }

    public Player(String[] playlist, int currentSong) {
        this.playlist = playlist;
        if (playlist.length > 0 && currentSong < playlist.length) {
            this.currentSong = currentSong;
        } else {
            throw new Error("invalid current song index");
        }
    }

    public Player next(){
        if(currentSong < playlist.length - 1 ){
            currentSong++;
        }else{
            currentSong = 0;
        }
        return this;
    }

    public Player previous(){
        if(currentSong >0 ){
            currentSong--;
        }else{
            currentSong = playlist.length - 1;
        }
        return  this;
    }
    abstract public Player play();
    abstract public Player pause();
}
