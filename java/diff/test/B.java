class M {
    /**
     * Invoked when a query execution, a call to execute/executeQuery or executeBatch succeeded and was within the timing threshold
     * @param query the query that was executed and failed
     * @param args the arguments to the execution
     * @param name the name of the method used to execute {@link AbstractCreateStatementInterceptor#executes}
     * @param start the time the query execution started
     * @param delta the time the execution took
     * @return - the SQL that was executed or the string &quot;batch&quot; if it was a batch execution 
     */
    protected String reportQuery(String query, Object[] args, final String name, long start, long delta) {
        //extract the query string
        String sql = (query==null && args!=null &&  args.length>0)?(String)args[0]:query;
        //if we do batch execution, then we name the query 'batch'
        if (sql==null && compare(EXECUTE_BATCH,name)) {
            sql = "batch";
        }
        return sql;
    }
}